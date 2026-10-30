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

// Function: sub_001E3F38
// Address: 0x1e3f38 - 0x1e3f98
void sub_001E3F38_0x1e3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F38_0x1e3f38");
#endif

    switch (ctx->pc) {
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        default: break;
    }

    ctx->pc = 0x1e3f38u;

label_1e3f38:
    // 0x1e3f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3f3c:
    // 0x1e3f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e3f40:
    // 0x1e3f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3f44:
    // 0x1e3f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f48:
    // 0x1e3f48: 0x92020130  lbu         $v0, 0x130($s0)
    ctx->pc = 0x1e3f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
label_1e3f4c:
    // 0x1e3f4c: 0xc078d9c  jal         func_1E3670
label_1e3f50:
    if (ctx->pc == 0x1E3F50u) {
        ctx->pc = 0x1E3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F4Cu;
        // 0x1e3f50: 0xa2020130  sb          $v0, 0x130($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F54u;
        goto label_1e3f54;
    }
    ctx->pc = 0x1E3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F54u);
    ctx->pc = 0x1E3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F4Cu;
    // 0x1e3f50: 0xa2020130  sb          $v0, 0x130($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3670u, 0x1E3F4Cu, 0x1E3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F54u;
label_1e3f54:
    // 0x1e3f54: 0x8e060140  lw          $a2, 0x140($s0)
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1e3f58:
    // 0x1e3f58: 0x92050130  lbu         $a1, 0x130($s0)
    ctx->pc = 0x1e3f58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
label_1e3f5c:
    // 0x1e3f5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3f60:
    // 0x1e3f60: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e3f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1e3f64:
    // 0x1e3f64: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1e3f68:
    // 0x1e3f68: 0x60f809  jalr        $v1
label_1e3f6c:
    if (ctx->pc == 0x1E3F6Cu) {
        ctx->pc = 0x1E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F68u;
        // 0x1e3f6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F70u;
        goto label_1e3f70;
    }
    ctx->pc = 0x1E3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3F70u);
        ctx->pc = 0x1E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F68u;
        // 0x1e3f6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F68u, 0x1E3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F70u;
label_1e3f70:
    // 0x1e3f70: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1e3f74:
    // 0x1e3f74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3f78:
    // 0x1e3f78: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e3f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e3f7c:
    // 0x1e3f7c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e3f80:
    // 0x1e3f80: 0x60f809  jalr        $v1
label_1e3f84:
    if (ctx->pc == 0x1E3F84u) {
        ctx->pc = 0x1E3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F80u;
        // 0x1e3f84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F88u;
        goto label_1e3f88;
    }
    ctx->pc = 0x1E3F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3F88u);
        ctx->pc = 0x1E3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F80u;
        // 0x1e3f84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F80u, 0x1E3F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F88u;
label_1e3f88:
    // 0x1e3f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3f8c:
    // 0x1e3f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3f90:
    // 0x1e3f90: 0x3e00008  jr          $ra
label_1e3f94:
    if (ctx->pc == 0x1E3F94u) {
        ctx->pc = 0x1E3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F90u;
        // 0x1e3f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F98u;
        goto label_fallthrough_0x1e3f90;
    }
    ctx->pc = 0x1E3F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F90u;
        // 0x1e3f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3f90:
    ctx->pc = 0x1E3F98u;
}
