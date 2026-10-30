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

// Function: sub_0020A4B8
// Address: 0x20a4b8 - 0x20a510
void sub_0020A4B8_0x20a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A4B8_0x20a4b8");
#endif

    switch (ctx->pc) {
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4c0u: goto label_20a4c0;
        case 0x20a4c4u: goto label_20a4c4;
        case 0x20a4c8u: goto label_20a4c8;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4d0u: goto label_20a4d0;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4d8u: goto label_20a4d8;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a4e8u: goto label_20a4e8;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4f0u: goto label_20a4f0;
        case 0x20a4f4u: goto label_20a4f4;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        default: break;
    }

    ctx->pc = 0x20a4b8u;

label_20a4b8:
    // 0x20a4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a4bc:
    // 0x20a4bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a4c0:
    // 0x20a4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a4c4:
    // 0x20a4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a4c8:
    // 0x20a4c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a4cc:
    // 0x20a4cc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20a4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20a4d0:
    // 0x20a4d0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20a4d4:
    // 0x20a4d4: 0x40f809  jalr        $v0
label_20a4d8:
    if (ctx->pc == 0x20A4D8u) {
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4DCu;
        goto label_20a4dc;
    }
    ctx->pc = 0x20A4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A4DCu);
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A4D4u, 0x20A4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A4DCu;
label_20a4dc:
    // 0x20a4dc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_20a4e0:
    if (ctx->pc == 0x20A4E0u) {
        ctx->pc = 0x20A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4DCu;
        // 0x20a4e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4E4u;
        goto label_20a4e4;
    }
    ctx->pc = 0x20A4DCu;
    {
        const bool branch_taken_0x20a4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a4dc) {
            ctx->pc = 0x20A4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A4DCu;
            // 0x20a4e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A528u;
            return;
        }
    }
    ctx->pc = 0x20A4E4u;
label_20a4e4:
    // 0x20a4e4: 0xc080ffa  jal         func_203FE8
label_20a4e8:
    if (ctx->pc == 0x20A4E8u) {
        ctx->pc = 0x20A4ECu;
        goto label_20a4ec;
    }
    ctx->pc = 0x20A4E4u;
    SET_GPR_U32(ctx, 31, 0x20A4ECu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20A4E4u, 0x20A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4ECu;
label_20a4ec:
    // 0x20a4ec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_20a4f0:
    if (ctx->pc == 0x20A4F0u) {
        ctx->pc = 0x20A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4ECu;
        // 0x20a4f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4F4u;
        goto label_20a4f4;
    }
    ctx->pc = 0x20A4ECu;
    {
        const bool branch_taken_0x20a4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a4ec) {
            ctx->pc = 0x20A4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A4ECu;
            // 0x20a4f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A528u;
            return;
        }
    }
    ctx->pc = 0x20A4F4u;
label_20a4f4:
    // 0x20a4f4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20a4f8:
    // 0x20a4f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a4fc:
    // 0x20a4fc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20a4fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20a500:
    // 0x20a500: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20a504:
    // 0x20a504: 0x60f809  jalr        $v1
label_20a508:
    if (ctx->pc == 0x20A508u) {
        ctx->pc = 0x20A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A504u;
        // 0x20a508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A50Cu;
        goto label_20a50c;
    }
    ctx->pc = 0x20A504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A50Cu);
        ctx->pc = 0x20A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A504u;
        // 0x20a508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A504u, 0x20A50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A50Cu;
label_20a50c:
    // 0x20a50c: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->pc = 0x20a510u;
}
