#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DA60
// Address: 0x28da60 - 0x28db08
void sub_0028DA60_0x28da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DA60_0x28da60");
#endif

    switch (ctx->pc) {
        case 0x28da8cu: goto label_28da8c;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daacu: goto label_28daac;
        default: break;
    }

    ctx->pc = 0x28da60u;

    // 0x28da60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28da64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28da64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28da68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28da6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28da6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28da74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28da78: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x28da7c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28DA7Cu;
    {
        const bool branch_taken_0x28da7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA7Cu;
        // 0x28da80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da7c) {
            ctx->pc = 0x28DAE8u;
            goto label_28dae8;
        }
    }
    ctx->pc = 0x28DA84u;
    // 0x28da84: 0xc0a36c2  jal         func_28DB08
    ctx->pc = 0x28DA84u;
    SET_GPR_U32(ctx, 31, 0x28DA8Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x28DA84u, 0x28DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA8Cu;
label_28da8c:
    // 0x28da8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28da8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da94: 0xc0be778  jal         func_2F9DE0
    ctx->pc = 0x28DA94u;
    SET_GPR_U32(ctx, 31, 0x28DA9Cu);
    ctx->pc = 0x28DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA94u;
    // 0x28da98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9DE0u, 0x28DA94u, 0x28DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA9Cu;
label_28da9c:
    // 0x28da9c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28DA9Cu;
    {
        const bool branch_taken_0x28da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA9Cu;
        // 0x28daa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da9c) {
            ctx->pc = 0x28DAECu;
            goto label_28daec;
        }
    }
    ctx->pc = 0x28DAA4u;
    // 0x28daa4: 0xc0a4e9c  jal         func_293A70
    ctx->pc = 0x28DAA4u;
    SET_GPR_U32(ctx, 31, 0x28DAACu);
    ctx->pc = 0x28DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAA4u;
    // 0x28daa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293A70u, 0x28DAA4u, 0x28DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAACu;
label_28daac:
    // 0x28daac: 0x8202002f  lb          $v0, 0x2F($s0)
    ctx->pc = 0x28daacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x28dab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28dab4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28dab8: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x28dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x28dabc: 0x9203002f  lbu         $v1, 0x2F($s0)
    ctx->pc = 0x28dabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x28dac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dac4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28dac8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28dacc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x28daccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28dad0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28DAD0u;
    {
        const bool branch_taken_0x28dad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAD0u;
        // 0x28dad4: 0xa203002f  sb          $v1, 0x2F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dad0) {
            ctx->pc = 0x28DADCu;
            goto label_28dadc;
        }
    }
    ctx->pc = 0x28DAD8u;
    // 0x28dad8: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x28dad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
label_28dadc:
    // 0x28dadc: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x28dadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x28dae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28dae4: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x28dae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
label_28dae8:
    // 0x28dae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28daec:
    // 0x28daec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28daecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28daf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28daf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28daf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28daf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28daf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28daf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dafc: 0x3e00008  jr          $ra
    ctx->pc = 0x28DAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAFCu;
        // 0x28db00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB04u;
    // 0x28db04: 0x0  nop
    ctx->pc = 0x28db04u;
    // NOP
    ctx->pc = 0x28db08u;
}
