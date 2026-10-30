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

// Function: sub_00198ED0
// Address: 0x198ed0 - 0x198f68
void sub_00198ED0_0x198ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198ED0_0x198ed0");
#endif

    switch (ctx->pc) {
        case 0x198f04u: goto label_198f04;
        case 0x198f20u: goto label_198f20;
        case 0x198f3cu: goto label_198f3c;
        default: break;
    }

    ctx->pc = 0x198ed0u;

    // 0x198ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198ed4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x198ed8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x198edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198ee0: 0x8e45ced0  lw          $a1, -0x3130($s2)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50CED0u));
    // 0x198ee4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x198ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ee8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x198eec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x198eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ef4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x198ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198efc: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x198EFCu;
    SET_GPR_U32(ctx, 31, 0x198F04u);
    ctx->pc = 0x198F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EFCu;
    // 0x198f00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x198EFCu, 0x198F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F04u;
label_198f04:
    // 0x198f04: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x198F04u;
    {
        const bool branch_taken_0x198f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F04u;
        // 0x198f08: 0x8e45ced0  lw          $a1, -0x3130($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f04) {
            ctx->pc = 0x198F48u;
            goto label_198f48;
        }
    }
    ctx->pc = 0x198F0Cu;
    // 0x198f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198f14: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x198f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x198f18: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x198F18u;
    SET_GPR_U32(ctx, 31, 0x198F20u);
    ctx->pc = 0x198F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F18u;
    // 0x198f1c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x198F18u, 0x198F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F20u;
label_198f20:
    // 0x198f20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198F20u;
    {
        const bool branch_taken_0x198f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F20u;
        // 0x198f24: 0x8e45ced0  lw          $a1, -0x3130($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f20) {
            ctx->pc = 0x198F48u;
            goto label_198f48;
        }
    }
    ctx->pc = 0x198F28u;
    // 0x198f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f2c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198f30: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x198f34: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x198F34u;
    SET_GPR_U32(ctx, 31, 0x198F3Cu);
    ctx->pc = 0x198F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F34u;
    // 0x198f38: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x198F34u, 0x198F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F3Cu;
label_198f3c:
    // 0x198f3c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x198f3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x198f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198F40u;
    {
        const bool branch_taken_0x198f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F40u;
        // 0x198f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f40) {
            ctx->pc = 0x198F4Cu;
            goto label_198f4c;
        }
    }
    ctx->pc = 0x198F48u;
label_198f48:
    // 0x198f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198f4c:
    // 0x198f4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198f50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198f54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x198F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F5Cu;
        // 0x198f60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198F64u;
    // 0x198f64: 0x0  nop
    ctx->pc = 0x198f64u;
    // NOP
    ctx->pc = 0x198f68u;
}
