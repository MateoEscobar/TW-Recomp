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

// Function: sub_00206F50
// Address: 0x206f50 - 0x206ff0
void sub_00206F50_0x206f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F50_0x206f50");
#endif

    switch (ctx->pc) {
        case 0x206f50u: goto label_206f50;
        case 0x206f54u: goto label_206f54;
        case 0x206f58u: goto label_206f58;
        case 0x206f5cu: goto label_206f5c;
        case 0x206f60u: goto label_206f60;
        case 0x206f64u: goto label_206f64;
        case 0x206f68u: goto label_206f68;
        case 0x206f6cu: goto label_206f6c;
        case 0x206f70u: goto label_206f70;
        case 0x206f74u: goto label_206f74;
        case 0x206f78u: goto label_206f78;
        case 0x206f7cu: goto label_206f7c;
        case 0x206f80u: goto label_206f80;
        case 0x206f84u: goto label_206f84;
        case 0x206f88u: goto label_206f88;
        case 0x206f8cu: goto label_206f8c;
        case 0x206f90u: goto label_206f90;
        case 0x206f94u: goto label_206f94;
        case 0x206f98u: goto label_206f98;
        case 0x206f9cu: goto label_206f9c;
        case 0x206fa0u: goto label_206fa0;
        case 0x206fa4u: goto label_206fa4;
        case 0x206fa8u: goto label_206fa8;
        case 0x206facu: goto label_206fac;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fb4u: goto label_206fb4;
        case 0x206fb8u: goto label_206fb8;
        case 0x206fbcu: goto label_206fbc;
        case 0x206fc0u: goto label_206fc0;
        case 0x206fc4u: goto label_206fc4;
        case 0x206fc8u: goto label_206fc8;
        case 0x206fccu: goto label_206fcc;
        case 0x206fd0u: goto label_206fd0;
        case 0x206fd4u: goto label_206fd4;
        case 0x206fd8u: goto label_206fd8;
        case 0x206fdcu: goto label_206fdc;
        case 0x206fe0u: goto label_206fe0;
        case 0x206fe4u: goto label_206fe4;
        case 0x206fe8u: goto label_206fe8;
        case 0x206fecu: goto label_206fec;
        default: break;
    }

    ctx->pc = 0x206f50u;

label_206f50:
    // 0x206f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_206f54:
    // 0x206f54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_206f58:
    // 0x206f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206f5c:
    // 0x206f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206f60:
    // 0x206f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206f64:
    // 0x206f64: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x206f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_206f68:
    // 0x206f68: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206f6c:
    // 0x206f6c: 0x40f809  jalr        $v0
label_206f70:
    if (ctx->pc == 0x206F70u) {
        ctx->pc = 0x206F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F6Cu;
        // 0x206f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F74u;
        goto label_206f74;
    }
    ctx->pc = 0x206F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206F74u);
        ctx->pc = 0x206F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F6Cu;
        // 0x206f70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F6Cu, 0x206F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206F74u;
label_206f74:
    // 0x206f74: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_206f78:
    if (ctx->pc == 0x206F78u) {
        ctx->pc = 0x206F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F74u;
        // 0x206f78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F7Cu;
        goto label_206f7c;
    }
    ctx->pc = 0x206F74u;
    {
        const bool branch_taken_0x206f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f74) {
            ctx->pc = 0x206F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F74u;
            // 0x206f78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206FE4u;
            goto label_206fe4;
        }
    }
    ctx->pc = 0x206F7Cu;
label_206f7c:
    // 0x206f7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206f80:
    // 0x206f80: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_206f84:
    // 0x206f84: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x206f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_206f88:
    // 0x206f88: 0x40f809  jalr        $v0
label_206f8c:
    if (ctx->pc == 0x206F8Cu) {
        ctx->pc = 0x206F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F88u;
        // 0x206f8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F90u;
        goto label_206f90;
    }
    ctx->pc = 0x206F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206F90u);
        ctx->pc = 0x206F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F88u;
        // 0x206f8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F88u, 0x206F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206F90u;
label_206f90:
    // 0x206f90: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_206f94:
    if (ctx->pc == 0x206F94u) {
        ctx->pc = 0x206F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F90u;
        // 0x206f94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F98u;
        goto label_206f98;
    }
    ctx->pc = 0x206F90u;
    {
        const bool branch_taken_0x206f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f90) {
            ctx->pc = 0x206F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F90u;
            // 0x206f94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206FE4u;
            goto label_206fe4;
        }
    }
    ctx->pc = 0x206F98u;
label_206f98:
    // 0x206f98: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_206f9c:
    // 0x206f9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206fa0:
    // 0x206fa0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_206fa4:
    // 0x206fa4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x206fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_206fa8:
    // 0x206fa8: 0x60f809  jalr        $v1
label_206fac:
    if (ctx->pc == 0x206FACu) {
        ctx->pc = 0x206FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FA8u;
        // 0x206fac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FB0u;
        goto label_206fb0;
    }
    ctx->pc = 0x206FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206FB0u);
        ctx->pc = 0x206FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FA8u;
        // 0x206fac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FA8u, 0x206FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206FB0u;
label_206fb0:
    // 0x206fb0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x206fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_206fb4:
    // 0x206fb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206fb8:
    // 0x206fb8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_206fbc:
    // 0x206fbc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_206fc0:
    // 0x206fc0: 0x60f809  jalr        $v1
label_206fc4:
    if (ctx->pc == 0x206FC4u) {
        ctx->pc = 0x206FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FC0u;
        // 0x206fc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FC8u;
        goto label_206fc8;
    }
    ctx->pc = 0x206FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206FC8u);
        ctx->pc = 0x206FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FC0u;
        // 0x206fc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FC0u, 0x206FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206FC8u;
label_206fc8:
    // 0x206fc8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_206fcc:
    // 0x206fcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206fd0:
    // 0x206fd0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_206fd4:
    // 0x206fd4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x206fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_206fd8:
    // 0x206fd8: 0x60f809  jalr        $v1
label_206fdc:
    if (ctx->pc == 0x206FDCu) {
        ctx->pc = 0x206FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FD8u;
        // 0x206fdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FE0u;
        goto label_206fe0;
    }
    ctx->pc = 0x206FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206FE0u);
        ctx->pc = 0x206FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FD8u;
        // 0x206fdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FD8u, 0x206FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206FE0u;
label_206fe0:
    // 0x206fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206fe4:
    // 0x206fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206fe8:
    // 0x206fe8: 0x3e00008  jr          $ra
label_206fec:
    if (ctx->pc == 0x206FECu) {
        ctx->pc = 0x206FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FE8u;
        // 0x206fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FF0u;
        goto label_fallthrough_0x206fe8;
    }
    ctx->pc = 0x206FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FE8u;
        // 0x206fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206fe8:
    ctx->pc = 0x206FF0u;
}
