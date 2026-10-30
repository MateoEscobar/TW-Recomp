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

// Function: sub_00325EA8
// Address: 0x325ea8 - 0x325fd8
void sub_00325EA8_0x325ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325EA8_0x325ea8");
#endif

    switch (ctx->pc) {
        case 0x325ed4u: goto label_325ed4;
        case 0x325ee0u: goto label_325ee0;
        case 0x325eecu: goto label_325eec;
        case 0x325efcu: goto label_325efc;
        case 0x325f04u: goto label_325f04;
        case 0x325f28u: goto label_325f28;
        case 0x325f38u: goto label_325f38;
        case 0x325f48u: goto label_325f48;
        case 0x325f5cu: goto label_325f5c;
        case 0x325f78u: goto label_325f78;
        case 0x325f80u: goto label_325f80;
        case 0x325f8cu: goto label_325f8c;
        case 0x325f98u: goto label_325f98;
        case 0x325fa0u: goto label_325fa0;
        case 0x325fb0u: goto label_325fb0;
        default: break;
    }

    ctx->pc = 0x325ea8u;

    // 0x325ea8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x325ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x325eac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325eb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x325eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x325eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325eb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x325eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x325ebc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x325ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x325ec0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x325ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x325ec4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x325ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x325ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325ecc: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325ECCu;
    SET_GPR_U32(ctx, 31, 0x325ED4u);
    ctx->pc = 0x325ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325ECCu;
    // 0x325ed0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325ECCu, 0x325ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325ED4u;
label_325ed4:
    // 0x325ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325ed8: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x325ED8u;
    SET_GPR_U32(ctx, 31, 0x325EE0u);
    ctx->pc = 0x325EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325ED8u;
    // 0x325edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x325ED8u, 0x325EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EE0u;
label_325ee0:
    // 0x325ee0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x325ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ee4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325EE4u;
    SET_GPR_U32(ctx, 31, 0x325EECu);
    ctx->pc = 0x325EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EE4u;
    // 0x325ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325EE4u, 0x325EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EECu;
label_325eec:
    // 0x325eec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ef4: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x325EF4u;
    SET_GPR_U32(ctx, 31, 0x325EFCu);
    ctx->pc = 0x325EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EF4u;
    // 0x325ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x325EF4u, 0x325EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EFCu;
label_325efc:
    // 0x325efc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x325EFCu;
    SET_GPR_U32(ctx, 31, 0x325F04u);
    ctx->pc = 0x325F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EFCu;
    // 0x325f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x325EFCu, 0x325F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F04u;
label_325f04:
    // 0x325f04: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x325F04u;
    {
        const bool branch_taken_0x325f04 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x325F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F04u;
        // 0x325f08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f04) {
            ctx->pc = 0x325F14u;
            goto label_325f14;
        }
    }
    ctx->pc = 0x325F0Cu;
    // 0x325f0c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x325F0Cu;
    {
        const bool branch_taken_0x325f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F0Cu;
        // 0x325f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f0c) {
            ctx->pc = 0x325FB4u;
            goto label_325fb4;
        }
    }
    ctx->pc = 0x325F14u;
label_325f14:
    // 0x325f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x325f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f20: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x325F20u;
    SET_GPR_U32(ctx, 31, 0x325F28u);
    ctx->pc = 0x325F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F20u;
    // 0x325f24: 0x2674ffff  addiu       $s4, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x325F20u, 0x325F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F28u;
label_325f28:
    // 0x325f28: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x325f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x325f2c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x325F2Cu;
    {
        const bool branch_taken_0x325f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F2Cu;
        // 0x325f30: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f2c) {
            ctx->pc = 0x325F6Cu;
            goto label_325f6c;
        }
    }
    ctx->pc = 0x325F34u;
    // 0x325f34: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x325f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_325f38:
    // 0x325f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f40: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x325F40u;
    SET_GPR_U32(ctx, 31, 0x325F48u);
    ctx->pc = 0x325F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F40u;
    // 0x325f44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x325F40u, 0x325F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F48u;
label_325f48:
    // 0x325f48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x325f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f54: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x325F54u;
    SET_GPR_U32(ctx, 31, 0x325F5Cu);
    ctx->pc = 0x325F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F54u;
    // 0x325f58: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x325F54u, 0x325F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F5Cu;
label_325f5c:
    // 0x325f5c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x325f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x325f60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x325F60u;
    {
        const bool branch_taken_0x325f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F60u;
        // 0x325f64: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f60) {
            ctx->pc = 0x325F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325f38;
        }
    }
    ctx->pc = 0x325F68u;
    // 0x325f68: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x325f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_325f6c:
    // 0x325f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f70: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x325F70u;
    SET_GPR_U32(ctx, 31, 0x325F78u);
    ctx->pc = 0x325F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F70u;
    // 0x325f74: 0x24a54b68  addiu       $a1, $a1, 0x4B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x325F70u, 0x325F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F78u;
label_325f78:
    // 0x325f78: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325F78u;
    SET_GPR_U32(ctx, 31, 0x325F80u);
    ctx->pc = 0x325F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F78u;
    // 0x325f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325F78u, 0x325F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F80u;
label_325f80:
    // 0x325f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f84: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325F84u;
    SET_GPR_U32(ctx, 31, 0x325F8Cu);
    ctx->pc = 0x325F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F84u;
    // 0x325f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325F84u, 0x325F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F8Cu;
label_325f8c:
    // 0x325f8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f90: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x325F90u;
    SET_GPR_U32(ctx, 31, 0x325F98u);
    ctx->pc = 0x325F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F90u;
    // 0x325f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x325F90u, 0x325F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F98u;
label_325f98:
    // 0x325f98: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x325F98u;
    SET_GPR_U32(ctx, 31, 0x325FA0u);
    ctx->pc = 0x325F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F98u;
    // 0x325f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x325F98u, 0x325FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FA0u;
label_325fa0:
    // 0x325fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fa4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fa8: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x325FA8u;
    SET_GPR_U32(ctx, 31, 0x325FB0u);
    ctx->pc = 0x325FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FA8u;
    // 0x325fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x325FA8u, 0x325FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FB0u;
label_325fb0:
    // 0x325fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325fb4:
    // 0x325fb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x325fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325fb8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x325fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325fbc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x325fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325fc0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x325fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325fc4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x325fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x325FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FCCu;
        // 0x325fd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325FD4u;
    // 0x325fd4: 0x0  nop
    ctx->pc = 0x325fd4u;
    // NOP
    ctx->pc = 0x325fd8u;
}
