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

// Function: sub_002D31B0
// Address: 0x2d31b0 - 0x2d3258
void sub_002D31B0_0x2d31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D31B0_0x2d31b0");
#endif

    switch (ctx->pc) {
        case 0x2d31b0u: goto label_2d31b0;
        case 0x2d31b4u: goto label_2d31b4;
        case 0x2d31b8u: goto label_2d31b8;
        case 0x2d31bcu: goto label_2d31bc;
        case 0x2d31c0u: goto label_2d31c0;
        case 0x2d31c4u: goto label_2d31c4;
        case 0x2d31c8u: goto label_2d31c8;
        case 0x2d31ccu: goto label_2d31cc;
        case 0x2d31d0u: goto label_2d31d0;
        case 0x2d31d4u: goto label_2d31d4;
        case 0x2d31d8u: goto label_2d31d8;
        case 0x2d31dcu: goto label_2d31dc;
        case 0x2d31e0u: goto label_2d31e0;
        case 0x2d31e4u: goto label_2d31e4;
        case 0x2d31e8u: goto label_2d31e8;
        case 0x2d31ecu: goto label_2d31ec;
        case 0x2d31f0u: goto label_2d31f0;
        case 0x2d31f4u: goto label_2d31f4;
        case 0x2d31f8u: goto label_2d31f8;
        case 0x2d31fcu: goto label_2d31fc;
        case 0x2d3200u: goto label_2d3200;
        case 0x2d3204u: goto label_2d3204;
        case 0x2d3208u: goto label_2d3208;
        case 0x2d320cu: goto label_2d320c;
        case 0x2d3210u: goto label_2d3210;
        case 0x2d3214u: goto label_2d3214;
        case 0x2d3218u: goto label_2d3218;
        case 0x2d321cu: goto label_2d321c;
        case 0x2d3220u: goto label_2d3220;
        case 0x2d3224u: goto label_2d3224;
        case 0x2d3228u: goto label_2d3228;
        case 0x2d322cu: goto label_2d322c;
        case 0x2d3230u: goto label_2d3230;
        case 0x2d3234u: goto label_2d3234;
        case 0x2d3238u: goto label_2d3238;
        case 0x2d323cu: goto label_2d323c;
        case 0x2d3240u: goto label_2d3240;
        case 0x2d3244u: goto label_2d3244;
        case 0x2d3248u: goto label_2d3248;
        case 0x2d324cu: goto label_2d324c;
        case 0x2d3250u: goto label_2d3250;
        case 0x2d3254u: goto label_2d3254;
        default: break;
    }

    ctx->pc = 0x2d31b0u;

label_2d31b0:
    // 0x2d31b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d31b4:
    // 0x2d31b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d31b8:
    // 0x2d31b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d31bc:
    // 0x2d31bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d31bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d31c0:
    // 0x2d31c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d31c4:
    // 0x2d31c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2d31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d31c8:
    // 0x2d31c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2d31cc:
    if (ctx->pc == 0x2D31CCu) {
        ctx->pc = 0x2D31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31C8u;
        // 0x2d31cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D31D0u;
        goto label_2d31d0;
    }
    ctx->pc = 0x2D31C8u;
    {
        const bool branch_taken_0x2d31c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d31c8) {
            ctx->pc = 0x2D31CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D31C8u;
            // 0x2d31cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D31E0u;
            goto label_2d31e0;
        }
    }
    ctx->pc = 0x2D31D0u;
label_2d31d0:
    // 0x2d31d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d31d4:
    // 0x2d31d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d31d8:
    // 0x2d31d8: 0xac620284  sw          $v0, 0x284($v1)
    ctx->pc = 0x2d31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 2));
label_2d31dc:
    // 0x2d31dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d31dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d31e0:
    // 0x2d31e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d31e4:
    // 0x2d31e4: 0x8c82021c  lw          $v0, 0x21C($a0)
    ctx->pc = 0x2d31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
label_2d31e8:
    // 0x2d31e8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2d31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2d31ec:
    // 0x2d31ec: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x2d31ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_2d31f0:
    // 0x2d31f0: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x2d31f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
label_2d31f4:
    // 0x2d31f4: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2d31f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2d31f8:
    // 0x2d31f8: 0xa2020031  sb          $v0, 0x31($s0)
    ctx->pc = 0x2d31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 2));
label_2d31fc:
    // 0x2d31fc: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2d31fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2d3200:
    // 0x2d3200: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2d3200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d3204:
    // 0x2d3204: 0x60f809  jalr        $v1
label_2d3208:
    if (ctx->pc == 0x2D3208u) {
        ctx->pc = 0x2D3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3204u;
        // 0x2d3208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D320Cu;
        goto label_2d320c;
    }
    ctx->pc = 0x2D3204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D320Cu);
        ctx->pc = 0x2D3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3204u;
        // 0x2d3208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3204u, 0x2D320Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D320Cu;
label_2d320c:
    // 0x2d320c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d3210:
    // 0x2d3210: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2d3210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d3214:
    // 0x2d3214: 0xc089000  jal         func_224000
label_2d3218:
    if (ctx->pc == 0x2D3218u) {
        ctx->pc = 0x2D3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3214u;
        // 0x2d3218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D321Cu;
        goto label_2d321c;
    }
    ctx->pc = 0x2D3214u;
    SET_GPR_U32(ctx, 31, 0x2D321Cu);
    ctx->pc = 0x2D3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3214u;
    // 0x2d3218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2D3214u, 0x2D321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D321Cu;
label_2d321c:
    // 0x2d321c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3220:
    // 0x2d3220: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2d3224:
    if (ctx->pc == 0x2D3224u) {
        ctx->pc = 0x2D3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3220u;
        // 0x2d3224: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3228u;
        goto label_2d3228;
    }
    ctx->pc = 0x2D3220u;
    {
        const bool branch_taken_0x2d3220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3220) {
            ctx->pc = 0x2D3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3220u;
            // 0x2d3224: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3234u;
            goto label_2d3234;
        }
    }
    ctx->pc = 0x2D3228u;
label_2d3228:
    // 0x2d3228: 0xc095fce  jal         func_257F38
label_2d322c:
    if (ctx->pc == 0x2D322Cu) {
        ctx->pc = 0x2D322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3228u;
        // 0x2d322c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3230u;
        goto label_2d3230;
    }
    ctx->pc = 0x2D3228u;
    SET_GPR_U32(ctx, 31, 0x2D3230u);
    ctx->pc = 0x2D322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3228u;
    // 0x2d322c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D3228u, 0x2D3230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3230u;
label_2d3230:
    // 0x2d3230: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d3234:
    // 0x2d3234: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2d3238:
    // 0x2d3238: 0x24421038  addiu       $v0, $v0, 0x1038
    ctx->pc = 0x2d3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4152));
label_2d323c:
    // 0x2d323c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d323cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3240:
    // 0x2d3240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3244:
    // 0x2d3244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3248:
    // 0x2d3248: 0xac620208  sw          $v0, 0x208($v1)
    ctx->pc = 0x2d3248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 2));
label_2d324c:
    // 0x2d324c: 0x3e00008  jr          $ra
label_2d3250:
    if (ctx->pc == 0x2D3250u) {
        ctx->pc = 0x2D3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D324Cu;
        // 0x2d3250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3254u;
        goto label_2d3254;
    }
    ctx->pc = 0x2D324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D324Cu;
        // 0x2d3250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3254u;
label_2d3254:
    // 0x2d3254: 0x0  nop
    ctx->pc = 0x2d3254u;
    // NOP
    ctx->pc = 0x2d3258u;
}
