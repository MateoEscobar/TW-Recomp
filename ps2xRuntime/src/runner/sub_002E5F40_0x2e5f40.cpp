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

// Function: sub_002E5F40
// Address: 0x2e5f40 - 0x2e5fa0
void sub_002E5F40_0x2e5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5F40_0x2e5f40");
#endif

    switch (ctx->pc) {
        case 0x2e5f40u: goto label_2e5f40;
        case 0x2e5f44u: goto label_2e5f44;
        case 0x2e5f48u: goto label_2e5f48;
        case 0x2e5f4cu: goto label_2e5f4c;
        case 0x2e5f50u: goto label_2e5f50;
        case 0x2e5f54u: goto label_2e5f54;
        case 0x2e5f58u: goto label_2e5f58;
        case 0x2e5f5cu: goto label_2e5f5c;
        case 0x2e5f60u: goto label_2e5f60;
        case 0x2e5f64u: goto label_2e5f64;
        case 0x2e5f68u: goto label_2e5f68;
        case 0x2e5f6cu: goto label_2e5f6c;
        case 0x2e5f70u: goto label_2e5f70;
        case 0x2e5f74u: goto label_2e5f74;
        case 0x2e5f78u: goto label_2e5f78;
        case 0x2e5f7cu: goto label_2e5f7c;
        case 0x2e5f80u: goto label_2e5f80;
        case 0x2e5f84u: goto label_2e5f84;
        case 0x2e5f88u: goto label_2e5f88;
        case 0x2e5f8cu: goto label_2e5f8c;
        case 0x2e5f90u: goto label_2e5f90;
        case 0x2e5f94u: goto label_2e5f94;
        case 0x2e5f98u: goto label_2e5f98;
        case 0x2e5f9cu: goto label_2e5f9c;
        default: break;
    }

    ctx->pc = 0x2e5f40u;

label_2e5f40:
    // 0x2e5f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e5f44:
    // 0x2e5f44: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2e5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2e5f48:
    // 0x2e5f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e5f4c:
    // 0x2e5f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5f50:
    // 0x2e5f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f54:
    // 0x2e5f54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5f58:
    // 0x2e5f58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5f5c:
    // 0x2e5f5c: 0xac44021c  sw          $a0, 0x21C($v0)
    ctx->pc = 0x2e5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 4));
label_2e5f60:
    // 0x2e5f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5f64:
    // 0x2e5f64: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2e5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2e5f68:
    // 0x2e5f68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5f6c:
    // 0x2e5f6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e5f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e5f70:
    // 0x2e5f70: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2e5f74:
    // 0x2e5f74: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e5f78:
    // 0x2e5f78: 0x84a40038  lh          $a0, 0x38($a1)
    ctx->pc = 0x2e5f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
label_2e5f7c:
    // 0x2e5f7c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2e5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2e5f80:
    // 0x2e5f80: 0x40f809  jalr        $v0
label_2e5f84:
    if (ctx->pc == 0x2E5F84u) {
        ctx->pc = 0x2E5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F80u;
        // 0x2e5f84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F88u;
        goto label_2e5f88;
    }
    ctx->pc = 0x2E5F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5F88u);
        ctx->pc = 0x2E5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F80u;
        // 0x2e5f84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F80u, 0x2E5F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5F88u;
label_2e5f88:
    // 0x2e5f88: 0xc0b996c  jal         func_2E65B0
label_2e5f8c:
    if (ctx->pc == 0x2E5F8Cu) {
        ctx->pc = 0x2E5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F88u;
        // 0x2e5f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F90u;
        goto label_2e5f90;
    }
    ctx->pc = 0x2E5F88u;
    SET_GPR_U32(ctx, 31, 0x2E5F90u);
    ctx->pc = 0x2E5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F88u;
    // 0x2e5f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E65B0u, 0x2E5F88u, 0x2E5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F90u;
label_2e5f90:
    // 0x2e5f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5f94:
    // 0x2e5f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5f98:
    // 0x2e5f98: 0x3e00008  jr          $ra
label_2e5f9c:
    if (ctx->pc == 0x2E5F9Cu) {
        ctx->pc = 0x2E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F98u;
        // 0x2e5f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FA0u;
        goto label_fallthrough_0x2e5f98;
    }
    ctx->pc = 0x2E5F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F98u;
        // 0x2e5f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e5f98:
    ctx->pc = 0x2E5FA0u;
}
