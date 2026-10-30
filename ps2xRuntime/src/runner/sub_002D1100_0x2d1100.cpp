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

// Function: sub_002D1100
// Address: 0x2d1100 - 0x2d11f8
void sub_002D1100_0x2d1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1100_0x2d1100");
#endif

    switch (ctx->pc) {
        case 0x2d1150u: goto label_2d1150;
        case 0x2d1178u: goto label_2d1178;
        case 0x2d1184u: goto label_2d1184;
        case 0x2d11acu: goto label_2d11ac;
        case 0x2d11d8u: goto label_2d11d8;
        default: break;
    }

    ctx->pc = 0x2d1100u;

    // 0x2d1100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d1104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d1108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d1108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d110c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d110cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1110: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d1114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d1114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d111c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2d111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d1120: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1120u;
    {
        const bool branch_taken_0x2d1120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1120u;
        // 0x2d1124: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1120) {
            ctx->pc = 0x2D1148u;
            goto label_2d1148;
        }
    }
    ctx->pc = 0x2D1128u;
    // 0x2d1128: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2d112c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2d112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d1130: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2d1130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d1134: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1134u;
    {
        const bool branch_taken_0x2d1134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1134) {
            ctx->pc = 0x2D1138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1134u;
            // 0x2d1138: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D113Cu;
            goto label_2d113c;
        }
    }
    ctx->pc = 0x2D113Cu;
label_2d113c:
    // 0x2d113c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2d113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d1140: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D1140u;
    {
        const bool branch_taken_0x2d1140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1140u;
        // 0x2d1144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1140) {
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D1148u;
label_2d1148:
    // 0x2d1148: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x2D1148u;
    SET_GPR_U32(ctx, 31, 0x2D1150u);
    ctx->pc = 0x2D114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1148u;
    // 0x2d114c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2D1148u, 0x2D1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1150u;
label_2d1150:
    // 0x2d1150: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D1150u;
    {
        const bool branch_taken_0x2d1150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1150u;
        // 0x2d1154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1150) {
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D1158u;
    // 0x2d1158: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2d1158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d115c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1160: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2d1160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2d1164: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d1164u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d1168: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1168u;
    {
        const bool branch_taken_0x2d1168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1168u;
        // 0x2d116c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1168) {
            ctx->pc = 0x2D1190u;
            goto label_2d1190;
        }
    }
    ctx->pc = 0x2D1170u;
    // 0x2d1170: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D1170u;
    SET_GPR_U32(ctx, 31, 0x2D1178u);
    ctx->pc = 0x2D1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1170u;
    // 0x2d1174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D1170u, 0x2D1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1178u;
label_2d1178:
    // 0x2d1178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d117c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2D117Cu;
    SET_GPR_U32(ctx, 31, 0x2D1184u);
    ctx->pc = 0x2D1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D117Cu;
    // 0x2d1180: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2D117Cu, 0x2D1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1184u;
label_2d1184:
    // 0x2d1184: 0x4420015  bltzl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1184u;
    {
        const bool branch_taken_0x2d1184 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d1184) {
            ctx->pc = 0x2D1188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1184u;
            // 0x2d1188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D118Cu;
    // 0x2d118c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d1190:
    // 0x2d1190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1198: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x2d1198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x2d119c: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d119cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d11a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d11a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11a4: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x2D11A4u;
    SET_GPR_U32(ctx, 31, 0x2D11ACu);
    ctx->pc = 0x2D11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11A4u;
    // 0x2d11a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2D11A4u, 0x2D11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11ACu;
label_2d11ac:
    // 0x2d11ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d11acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d11b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d11b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d11b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d11b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d11b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d11bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d11bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2d11c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d11c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d11c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d11c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d11ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11d0: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D11D0u;
    SET_GPR_U32(ctx, 31, 0x2D11D8u);
    ctx->pc = 0x2D11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11D0u;
    // 0x2d11d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D11D0u, 0x2D11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11D8u;
label_2d11d8:
    // 0x2d11d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d11dc:
    // 0x2d11dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d11dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d11e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d11e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d11e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d11e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d11e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d11e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d11ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D11ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11ECu;
        // 0x2d11f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D11ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D11F4u;
    // 0x2d11f4: 0x0  nop
    ctx->pc = 0x2d11f4u;
    // NOP
    ctx->pc = 0x2d11f8u;
}
