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

// Function: sub_00123F30
// Address: 0x123f30 - 0x123fb8
void sub_00123F30_0x123f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123F30_0x123f30");
#endif

    switch (ctx->pc) {
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        default: break;
    }

    ctx->pc = 0x123f30u;

label_123f30:
    // 0x123f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_123f34:
    // 0x123f34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x123f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_123f38:
    // 0x123f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_123f3c:
    // 0x123f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123f40:
    // 0x123f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x123f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_123f44:
    // 0x123f44: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x123f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_123f48:
    // 0x123f48: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x123f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_123f4c:
    // 0x123f4c: 0x40f809  jalr        $v0
label_123f50:
    if (ctx->pc == 0x123F50u) {
        ctx->pc = 0x123F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F4Cu;
        // 0x123f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F54u;
        goto label_123f54;
    }
    ctx->pc = 0x123F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123F54u);
        ctx->pc = 0x123F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F4Cu;
        // 0x123f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F4Cu, 0x123F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123F54u;
label_123f54:
    // 0x123f54: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x123f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_123f58:
    // 0x123f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123f5c:
    // 0x123f5c: 0xc136b7c  jal         func_4DADF0
label_123f60:
    if (ctx->pc == 0x123F60u) {
        ctx->pc = 0x123F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F5Cu;
        // 0x123f60: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F64u;
        goto label_123f64;
    }
    ctx->pc = 0x123F5Cu;
    SET_GPR_U32(ctx, 31, 0x123F64u);
    ctx->pc = 0x123F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F5Cu;
    // 0x123f60: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x123F5Cu, 0x123F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F64u;
label_123f64:
    // 0x123f64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123f68:
    // 0x123f68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123f6c:
    // 0x123f6c: 0xc0e409a  jal         func_390268
label_123f70:
    if (ctx->pc == 0x123F70u) {
        ctx->pc = 0x123F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F6Cu;
        // 0x123f70: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F74u;
        goto label_123f74;
    }
    ctx->pc = 0x123F6Cu;
    SET_GPR_U32(ctx, 31, 0x123F74u);
    ctx->pc = 0x123F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F6Cu;
    // 0x123f70: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x123F6Cu, 0x123F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F74u;
label_123f74:
    // 0x123f74: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x123f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_123f78:
    // 0x123f78: 0xc049000  jal         func_124000
label_123f7c:
    if (ctx->pc == 0x123F7Cu) {
        ctx->pc = 0x123F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F78u;
        // 0x123f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F80u;
        goto label_123f80;
    }
    ctx->pc = 0x123F78u;
    SET_GPR_U32(ctx, 31, 0x123F80u);
    ctx->pc = 0x123F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F78u;
    // 0x123f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124000u, 0x123F78u, 0x123F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F80u;
label_123f80:
    // 0x123f80: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x123f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_123f84:
    // 0x123f84: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x123f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_123f88:
    // 0x123f88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x123f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123f8c:
    // 0x123f8c: 0xc04828c  jal         func_120A30
label_123f90:
    if (ctx->pc == 0x123F90u) {
        ctx->pc = 0x123F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F8Cu;
        // 0x123f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F94u;
        goto label_123f94;
    }
    ctx->pc = 0x123F8Cu;
    SET_GPR_U32(ctx, 31, 0x123F94u);
    ctx->pc = 0x123F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F8Cu;
    // 0x123f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x123F8Cu, 0x123F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F94u;
label_123f94:
    // 0x123f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_123f98:
    // 0x123f98: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x123f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_123f9c:
    // 0x123f9c: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_123fa0:
    // 0x123fa0: 0x60f809  jalr        $v1
label_123fa4:
    if (ctx->pc == 0x123FA4u) {
        ctx->pc = 0x123FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FA0u;
        // 0x123fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FA8u;
        goto label_123fa8;
    }
    ctx->pc = 0x123FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123FA8u);
        ctx->pc = 0x123FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FA0u;
        // 0x123fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FA0u, 0x123FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123FA8u;
label_123fa8:
    // 0x123fa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x123fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123fac:
    // 0x123fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123fb0:
    // 0x123fb0: 0x3e00008  jr          $ra
label_123fb4:
    if (ctx->pc == 0x123FB4u) {
        ctx->pc = 0x123FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FB0u;
        // 0x123fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FB8u;
        goto label_fallthrough_0x123fb0;
    }
    ctx->pc = 0x123FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FB0u;
        // 0x123fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123fb0:
    ctx->pc = 0x123FB8u;
}
