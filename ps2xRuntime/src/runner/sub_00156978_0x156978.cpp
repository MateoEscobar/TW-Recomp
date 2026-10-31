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

// Function: sub_00156978
// Address: 0x156978 - 0x1569c0
void sub_00156978_0x156978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156978_0x156978");
#endif

    switch (ctx->pc) {
        case 0x156978u: goto label_156978;
        case 0x15697cu: goto label_15697c;
        case 0x156980u: goto label_156980;
        case 0x156984u: goto label_156984;
        case 0x156988u: goto label_156988;
        case 0x15698cu: goto label_15698c;
        case 0x156990u: goto label_156990;
        case 0x156994u: goto label_156994;
        case 0x156998u: goto label_156998;
        case 0x15699cu: goto label_15699c;
        case 0x1569a0u: goto label_1569a0;
        case 0x1569a4u: goto label_1569a4;
        case 0x1569a8u: goto label_1569a8;
        case 0x1569acu: goto label_1569ac;
        case 0x1569b0u: goto label_1569b0;
        case 0x1569b4u: goto label_1569b4;
        case 0x1569b8u: goto label_1569b8;
        case 0x1569bcu: goto label_1569bc;
        default: break;
    }

    ctx->pc = 0x156978u;

label_156978:
    // 0x156978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15697c:
    // 0x15697c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15697cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_156980:
    // 0x156980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156984:
    // 0x156984: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x156984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_156988:
    // 0x156988: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15698c:
    // 0x15698c: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15698cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_156990:
    // 0x156990: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_156994:
    // 0x156994: 0x60f809  jalr        $v1
label_156998:
    if (ctx->pc == 0x156998u) {
        ctx->pc = 0x156998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156994u;
        // 0x156998: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15699Cu;
        goto label_15699c;
    }
    ctx->pc = 0x156994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15699Cu);
        ctx->pc = 0x156998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156994u;
        // 0x156998: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156994u, 0x15699Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15699Cu;
label_15699c:
    // 0x15699c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1569a0:
    // 0x1569a0: 0xc061748  jal         func_185D20
label_1569a4:
    if (ctx->pc == 0x1569A4u) {
        ctx->pc = 0x1569A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569A0u;
        // 0x1569a4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1569A8u;
        goto label_1569a8;
    }
    ctx->pc = 0x1569A0u;
    SET_GPR_U32(ctx, 31, 0x1569A8u);
    ctx->pc = 0x1569A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569A0u;
    // 0x1569a4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1569A0u, 0x1569A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569A8u;
label_1569a8:
    // 0x1569a8: 0xc05f0c2  jal         func_17C308
label_1569ac:
    if (ctx->pc == 0x1569ACu) {
        ctx->pc = 0x1569B0u;
        goto label_1569b0;
    }
    ctx->pc = 0x1569A8u;
    SET_GPR_U32(ctx, 31, 0x1569B0u);
    ctx->pc = 0x17C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C308u, 0x1569A8u, 0x1569B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569B0u;
label_1569b0:
    // 0x1569b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1569b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1569b4:
    // 0x1569b4: 0x3e00008  jr          $ra
label_1569b8:
    if (ctx->pc == 0x1569B8u) {
        ctx->pc = 0x1569B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569B4u;
        // 0x1569b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1569BCu;
        goto label_1569bc;
    }
    ctx->pc = 0x1569B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1569B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569B4u;
        // 0x1569b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1569B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1569BCu;
label_1569bc:
    // 0x1569bc: 0x0  nop
    ctx->pc = 0x1569bcu;
    // NOP
    ctx->pc = 0x1569c0u;
}
