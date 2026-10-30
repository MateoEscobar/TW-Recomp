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

// Function: sub_001E2090
// Address: 0x1e2090 - 0x1e2130
void sub_001E2090_0x1e2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2090_0x1e2090");
#endif

    switch (ctx->pc) {
        case 0x1e2090u: goto label_1e2090;
        case 0x1e2094u: goto label_1e2094;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20a0u: goto label_1e20a0;
        case 0x1e20a4u: goto label_1e20a4;
        case 0x1e20a8u: goto label_1e20a8;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20b0u: goto label_1e20b0;
        case 0x1e20b4u: goto label_1e20b4;
        case 0x1e20b8u: goto label_1e20b8;
        case 0x1e20bcu: goto label_1e20bc;
        case 0x1e20c0u: goto label_1e20c0;
        case 0x1e20c4u: goto label_1e20c4;
        case 0x1e20c8u: goto label_1e20c8;
        case 0x1e20ccu: goto label_1e20cc;
        case 0x1e20d0u: goto label_1e20d0;
        case 0x1e20d4u: goto label_1e20d4;
        case 0x1e20d8u: goto label_1e20d8;
        case 0x1e20dcu: goto label_1e20dc;
        case 0x1e20e0u: goto label_1e20e0;
        case 0x1e20e4u: goto label_1e20e4;
        case 0x1e20e8u: goto label_1e20e8;
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e20f0u: goto label_1e20f0;
        case 0x1e20f4u: goto label_1e20f4;
        case 0x1e20f8u: goto label_1e20f8;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2104u: goto label_1e2104;
        case 0x1e2108u: goto label_1e2108;
        case 0x1e210cu: goto label_1e210c;
        case 0x1e2110u: goto label_1e2110;
        case 0x1e2114u: goto label_1e2114;
        case 0x1e2118u: goto label_1e2118;
        case 0x1e211cu: goto label_1e211c;
        case 0x1e2120u: goto label_1e2120;
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2128u: goto label_1e2128;
        case 0x1e212cu: goto label_1e212c;
        default: break;
    }

    ctx->pc = 0x1e2090u;

label_1e2090:
    // 0x1e2090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2094:
    // 0x1e2094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e2098:
    // 0x1e2098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e209c:
    // 0x1e209c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e209cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e20a0:
    // 0x1e20a0: 0xc051800  jal         func_146000
label_1e20a4:
    if (ctx->pc == 0x1E20A4u) {
        ctx->pc = 0x1E20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20A0u;
        // 0x1e20a4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20A8u;
        goto label_1e20a8;
    }
    ctx->pc = 0x1E20A0u;
    SET_GPR_U32(ctx, 31, 0x1E20A8u);
    ctx->pc = 0x1E20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20A0u;
    // 0x1e20a4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1E20A0u, 0x1E20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20A8u;
label_1e20a8:
    // 0x1e20a8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1e20ac:
    // 0x1e20ac: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1e20b0:
    if (ctx->pc == 0x1E20B0u) {
        ctx->pc = 0x1E20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20ACu;
        // 0x1e20b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20B4u;
        goto label_1e20b4;
    }
    ctx->pc = 0x1E20ACu;
    {
        const bool branch_taken_0x1e20ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20ac) {
            ctx->pc = 0x1E20B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E20ACu;
            // 0x1e20b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2120u;
            goto label_1e2120;
        }
    }
    ctx->pc = 0x1E20B4u;
label_1e20b4:
    // 0x1e20b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e20b8:
    // 0x1e20b8: 0x26030094  addiu       $v1, $s0, 0x94
    ctx->pc = 0x1e20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1e20bc:
    // 0x1e20bc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e20c0:
    // 0x1e20c0: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e20c4:
    // 0x1e20c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e20c8:
    // 0x1e20c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e20cc:
    // 0x1e20cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e20d0:
    // 0x1e20d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e20d4:
    // 0x1e20d4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e20d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e20d8:
    // 0x1e20d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e20dc:
    if (ctx->pc == 0x1E20DCu) {
        ctx->pc = 0x1E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D8u;
        // 0x1e20dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20E0u;
        goto label_1e20e0;
    }
    ctx->pc = 0x1E20D8u;
    {
        const bool branch_taken_0x1e20d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D8u;
        // 0x1e20dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d8) {
            ctx->pc = 0x1E20FCu;
            goto label_1e20fc;
        }
    }
    ctx->pc = 0x1E20E0u;
label_1e20e0:
    // 0x1e20e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e20e4:
    // 0x1e20e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e20e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e20e8:
    // 0x1e20e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e20ec:
    // 0x1e20ec: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1e20f0:
    // 0x1e20f0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1e20f4:
    // 0x1e20f4: 0x40f809  jalr        $v0
label_1e20f8:
    if (ctx->pc == 0x1E20F8u) {
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20FCu;
        goto label_1e20fc;
    }
    ctx->pc = 0x1E20F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E20FCu);
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20F4u, 0x1E20FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e2100:
    // 0x1e2100: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e2104:
    // 0x1e2104: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e2108:
    // 0x1e2108: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e2108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e210c:
    // 0x1e210c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e2110:
    // 0x1e2110: 0x40f809  jalr        $v0
label_1e2114:
    if (ctx->pc == 0x1E2114u) {
        ctx->pc = 0x1E2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2110u;
        // 0x1e2114: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2118u;
        goto label_1e2118;
    }
    ctx->pc = 0x1E2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2118u);
        ctx->pc = 0x1E2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2110u;
        // 0x1e2114: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2110u, 0x1E2118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2118u;
label_1e2118:
    // 0x1e2118: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_1e211c:
    // 0x1e211c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2120:
    // 0x1e2120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2124:
    // 0x1e2124: 0x3e00008  jr          $ra
label_1e2128:
    if (ctx->pc == 0x1E2128u) {
        ctx->pc = 0x1E2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2124u;
        // 0x1e2128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E212Cu;
        goto label_1e212c;
    }
    ctx->pc = 0x1E2124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2124u;
        // 0x1e2128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E212Cu;
label_1e212c:
    // 0x1e212c: 0x0  nop
    ctx->pc = 0x1e212cu;
    // NOP
    ctx->pc = 0x1e2130u;
}
