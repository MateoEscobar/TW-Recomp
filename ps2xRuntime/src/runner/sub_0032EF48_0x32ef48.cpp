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

// Function: sub_0032EF48
// Address: 0x32ef48 - 0x32eff0
void sub_0032EF48_0x32ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EF48_0x32ef48");
#endif

    switch (ctx->pc) {
        case 0x32ef68u: goto label_32ef68;
        case 0x32ef7cu: goto label_32ef7c;
        case 0x32efa4u: goto label_32efa4;
        case 0x32efb4u: goto label_32efb4;
        case 0x32efbcu: goto label_32efbc;
        case 0x32efc8u: goto label_32efc8;
        default: break;
    }

    ctx->pc = 0x32ef48u;

    // 0x32ef48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ef4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32ef50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32ef54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ef54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32ef5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ef60: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32EF60u;
    SET_GPR_U32(ctx, 31, 0x32EF68u);
    ctx->pc = 0x32EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF60u;
    // 0x32ef64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32EF60u, 0x32EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF68u;
label_32ef68:
    // 0x32ef68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32ef68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef74: 0xc0cb480  jal         func_32D200
    ctx->pc = 0x32EF74u;
    SET_GPR_U32(ctx, 31, 0x32EF7Cu);
    ctx->pc = 0x32EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF74u;
    // 0x32ef78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D200u, 0x32EF74u, 0x32EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF7Cu;
label_32ef7c:
    // 0x32ef7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ef80: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x32ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x32ef84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EF84u;
    {
        const bool branch_taken_0x32ef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF84u;
        // 0x32ef88: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef84) {
            ctx->pc = 0x32EF94u;
            goto label_32ef94;
        }
    }
    ctx->pc = 0x32EF8Cu;
    // 0x32ef8c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32EF8Cu;
    {
        const bool branch_taken_0x32ef8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF8Cu;
        // 0x32ef90: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef8c) {
            ctx->pc = 0x32EFD4u;
            goto label_32efd4;
        }
    }
    ctx->pc = 0x32EF94u;
label_32ef94:
    // 0x32ef94: 0x3862003a  xori        $v0, $v1, 0x3A
    ctx->pc = 0x32ef94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)58);
    // 0x32ef98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef9c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32EF9Cu;
    SET_GPR_U32(ctx, 31, 0x32EFA4u);
    ctx->pc = 0x32EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF9Cu;
    // 0x32efa0: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32EF9Cu, 0x32EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFA4u;
label_32efa4:
    // 0x32efa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32efa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32efac: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32EFACu;
    SET_GPR_U32(ctx, 31, 0x32EFB4u);
    ctx->pc = 0x32EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EFACu;
    // 0x32efb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32EFACu, 0x32EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFB4u;
label_32efb4:
    // 0x32efb4: 0xc0cb3d0  jal         func_32CF40
    ctx->pc = 0x32EFB4u;
    SET_GPR_U32(ctx, 31, 0x32EFBCu);
    ctx->pc = 0x32EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EFB4u;
    // 0x32efb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF40u, 0x32EFB4u, 0x32EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFBCu;
label_32efbc:
    // 0x32efbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32efc0: 0xc0c99fe  jal         func_3267F8
    ctx->pc = 0x32EFC0u;
    SET_GPR_U32(ctx, 31, 0x32EFC8u);
    ctx->pc = 0x32EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EFC0u;
    // 0x32efc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267F8u, 0x32EFC0u, 0x32EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EFC8u;
label_32efc8:
    // 0x32efc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32efcc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32efccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32efd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32efd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32efd4:
    // 0x32efd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32efd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32efd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32efd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32efdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32efdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32efe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32efe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32efe4: 0x3e00008  jr          $ra
    ctx->pc = 0x32EFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EFE4u;
        // 0x32efe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EFECu;
    // 0x32efec: 0x0  nop
    ctx->pc = 0x32efecu;
    // NOP
    ctx->pc = 0x32eff0u;
}
