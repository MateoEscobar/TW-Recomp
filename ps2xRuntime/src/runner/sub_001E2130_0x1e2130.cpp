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

// Function: sub_001E2130
// Address: 0x1e2130 - 0x1e21c0
void sub_001E2130_0x1e2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2130_0x1e2130");
#endif

    switch (ctx->pc) {
        case 0x1e2130u: goto label_1e2130;
        case 0x1e2134u: goto label_1e2134;
        case 0x1e2138u: goto label_1e2138;
        case 0x1e213cu: goto label_1e213c;
        case 0x1e2140u: goto label_1e2140;
        case 0x1e2144u: goto label_1e2144;
        case 0x1e2148u: goto label_1e2148;
        case 0x1e214cu: goto label_1e214c;
        case 0x1e2150u: goto label_1e2150;
        case 0x1e2154u: goto label_1e2154;
        case 0x1e2158u: goto label_1e2158;
        case 0x1e215cu: goto label_1e215c;
        case 0x1e2160u: goto label_1e2160;
        case 0x1e2164u: goto label_1e2164;
        case 0x1e2168u: goto label_1e2168;
        case 0x1e216cu: goto label_1e216c;
        case 0x1e2170u: goto label_1e2170;
        case 0x1e2174u: goto label_1e2174;
        case 0x1e2178u: goto label_1e2178;
        case 0x1e217cu: goto label_1e217c;
        case 0x1e2180u: goto label_1e2180;
        case 0x1e2184u: goto label_1e2184;
        case 0x1e2188u: goto label_1e2188;
        case 0x1e218cu: goto label_1e218c;
        case 0x1e2190u: goto label_1e2190;
        case 0x1e2194u: goto label_1e2194;
        case 0x1e2198u: goto label_1e2198;
        case 0x1e219cu: goto label_1e219c;
        case 0x1e21a0u: goto label_1e21a0;
        case 0x1e21a4u: goto label_1e21a4;
        case 0x1e21a8u: goto label_1e21a8;
        case 0x1e21acu: goto label_1e21ac;
        case 0x1e21b0u: goto label_1e21b0;
        case 0x1e21b4u: goto label_1e21b4;
        case 0x1e21b8u: goto label_1e21b8;
        case 0x1e21bcu: goto label_1e21bc;
        default: break;
    }

    ctx->pc = 0x1e2130u;

label_1e2130:
    // 0x1e2130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2134:
    // 0x1e2134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e2138:
    // 0x1e2138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e213c:
    // 0x1e213c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2140:
    // 0x1e2140: 0xc051800  jal         func_146000
label_1e2144:
    if (ctx->pc == 0x1E2144u) {
        ctx->pc = 0x1E2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2140u;
        // 0x1e2144: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2148u;
        goto label_1e2148;
    }
    ctx->pc = 0x1E2140u;
    SET_GPR_U32(ctx, 31, 0x1E2148u);
    ctx->pc = 0x1E2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2140u;
    // 0x1e2144: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1E2140u, 0x1E2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2148u;
label_1e2148:
    // 0x1e2148: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e2148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1e214c:
    // 0x1e214c: 0x26030094  addiu       $v1, $s0, 0x94
    ctx->pc = 0x1e214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1e2150:
    // 0x1e2150: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e2154:
    // 0x1e2154: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e2158:
    // 0x1e2158: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e215c:
    // 0x1e215c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e215cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2160:
    // 0x1e2160: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2164:
    // 0x1e2164: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e2164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2168:
    // 0x1e2168: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e216c:
    if (ctx->pc == 0x1E216Cu) {
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2170u;
        goto label_1e2170;
    }
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E218Cu;
            goto label_1e218c;
        }
    }
    ctx->pc = 0x1E2170u;
label_1e2170:
    // 0x1e2170: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2174:
    // 0x1e2174: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e2174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2178:
    // 0x1e2178: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e2178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e217c:
    // 0x1e217c: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1e217cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1e2180:
    // 0x1e2180: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1e2184:
    // 0x1e2184: 0x40f809  jalr        $v0
label_1e2188:
    if (ctx->pc == 0x1E2188u) {
        ctx->pc = 0x1E2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2184u;
        // 0x1e2188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E218Cu;
        goto label_1e218c;
    }
    ctx->pc = 0x1E2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E218Cu);
        ctx->pc = 0x1E2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2184u;
        // 0x1e2188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2184u, 0x1E218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E218Cu;
label_1e218c:
    // 0x1e218c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e2190:
    // 0x1e2190: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e2194:
    // 0x1e2194: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e2198:
    // 0x1e2198: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e2198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e219c:
    // 0x1e219c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e21a0:
    // 0x1e21a0: 0x40f809  jalr        $v0
label_1e21a4:
    if (ctx->pc == 0x1E21A4u) {
        ctx->pc = 0x1E21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A0u;
        // 0x1e21a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21A8u;
        goto label_1e21a8;
    }
    ctx->pc = 0x1E21A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E21A8u);
        ctx->pc = 0x1E21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A0u;
        // 0x1e21a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21A0u, 0x1E21A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E21A8u;
label_1e21a8:
    // 0x1e21a8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_1e21ac:
    // 0x1e21ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e21acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e21b0:
    // 0x1e21b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e21b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e21b4:
    // 0x1e21b4: 0x3e00008  jr          $ra
label_1e21b8:
    if (ctx->pc == 0x1E21B8u) {
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21BCu;
        goto label_1e21bc;
    }
    ctx->pc = 0x1E21B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E21BCu;
label_1e21bc:
    // 0x1e21bc: 0x0  nop
    ctx->pc = 0x1e21bcu;
    // NOP
    ctx->pc = 0x1e21c0u;
}
