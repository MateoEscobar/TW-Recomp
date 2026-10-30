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

// Function: sub_00303178
// Address: 0x303178 - 0x30323c
void sub_00303178_0x303178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303178_0x303178");
#endif

    switch (ctx->pc) {
        case 0x303178u: goto label_303178;
        case 0x30317cu: goto label_30317c;
        case 0x303180u: goto label_303180;
        case 0x303184u: goto label_303184;
        case 0x303188u: goto label_303188;
        case 0x30318cu: goto label_30318c;
        case 0x303190u: goto label_303190;
        case 0x303194u: goto label_303194;
        case 0x303198u: goto label_303198;
        case 0x30319cu: goto label_30319c;
        case 0x3031a0u: goto label_3031a0;
        case 0x3031a4u: goto label_3031a4;
        case 0x3031a8u: goto label_3031a8;
        case 0x3031acu: goto label_3031ac;
        case 0x3031b0u: goto label_3031b0;
        case 0x3031b4u: goto label_3031b4;
        case 0x3031b8u: goto label_3031b8;
        case 0x3031bcu: goto label_3031bc;
        case 0x3031c0u: goto label_3031c0;
        case 0x3031c4u: goto label_3031c4;
        case 0x3031c8u: goto label_3031c8;
        case 0x3031ccu: goto label_3031cc;
        case 0x3031d0u: goto label_3031d0;
        case 0x3031d4u: goto label_3031d4;
        case 0x3031d8u: goto label_3031d8;
        case 0x3031dcu: goto label_3031dc;
        case 0x3031e0u: goto label_3031e0;
        case 0x3031e4u: goto label_3031e4;
        case 0x3031e8u: goto label_3031e8;
        case 0x3031ecu: goto label_3031ec;
        case 0x3031f0u: goto label_3031f0;
        case 0x3031f4u: goto label_3031f4;
        case 0x3031f8u: goto label_3031f8;
        case 0x3031fcu: goto label_3031fc;
        case 0x303200u: goto label_303200;
        case 0x303204u: goto label_303204;
        case 0x303208u: goto label_303208;
        case 0x30320cu: goto label_30320c;
        case 0x303210u: goto label_303210;
        case 0x303214u: goto label_303214;
        case 0x303218u: goto label_303218;
        case 0x30321cu: goto label_30321c;
        case 0x303220u: goto label_303220;
        case 0x303224u: goto label_303224;
        case 0x303228u: goto label_303228;
        case 0x30322cu: goto label_30322c;
        case 0x303230u: goto label_303230;
        case 0x303234u: goto label_303234;
        case 0x303238u: goto label_303238;
        default: break;
    }

    ctx->pc = 0x303178u;

label_303178:
    // 0x303178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30317c:
    // 0x30317c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_303180:
    // 0x303180: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x303180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_303184:
    // 0x303184: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x303184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_303188:
    // 0x303188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30318c:
    // 0x30318c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x30318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_303190:
    // 0x303190: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x303190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_303194:
    // 0x303194: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_303198:
    if (ctx->pc == 0x303198u) {
        ctx->pc = 0x303198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303194u;
        // 0x303198: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30319Cu;
        goto label_30319c;
    }
    ctx->pc = 0x303194u;
    {
        const bool branch_taken_0x303194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303194u;
        // 0x303198: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303194) {
            ctx->pc = 0x30323Cu;
            return;
        }
    }
    ctx->pc = 0x30319Cu;
label_30319c:
    // 0x30319c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x30319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_3031a0:
    // 0x3031a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3031a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3031a4:
    // 0x3031a4: 0x24429470  addiu       $v0, $v0, -0x6B90
    ctx->pc = 0x3031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939760));
label_3031a8:
    // 0x3031a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3031ac:
    // 0x3031ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3031acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3031b0:
    // 0x3031b0: 0x800008  jr          $a0
label_3031b4:
    if (ctx->pc == 0x3031B4u) {
        ctx->pc = 0x3031B8u;
        goto label_3031b8;
    }
    ctx->pc = 0x3031B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3031B8u: goto label_3031b8;
            case 0x3031D0u: goto label_3031d0;
            case 0x3031DCu: goto label_3031dc;
            case 0x3031E4u: goto label_3031e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3031B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3031B8u;
label_3031b8:
    // 0x3031b8: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x3031b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_3031bc:
    // 0x3031bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3031bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3031c0:
    // 0x3031c0: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_3031c4:
    if (ctx->pc == 0x3031C4u) {
        ctx->pc = 0x3031C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031C0u;
        // 0x3031c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031C8u;
        goto label_3031c8;
    }
    ctx->pc = 0x3031C0u;
    {
        const bool branch_taken_0x3031c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3031C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031C0u;
        // 0x3031c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031c0) {
            ctx->pc = 0x30324Cu;
            return;
        }
    }
    ctx->pc = 0x3031C8u;
label_3031c8:
    // 0x3031c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3031cc:
    if (ctx->pc == 0x3031CCu) {
        ctx->pc = 0x3031CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031C8u;
        // 0x3031cc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031D0u;
        goto label_3031d0;
    }
    ctx->pc = 0x3031C8u;
    {
        const bool branch_taken_0x3031c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3031CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031C8u;
        // 0x3031cc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031c8) {
            ctx->pc = 0x3031D4u;
            goto label_3031d4;
        }
    }
    ctx->pc = 0x3031D0u;
label_3031d0:
    // 0x3031d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3031d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3031d4:
    // 0x3031d4: 0xc0c0bfc  jal         func_302FF0
label_3031d8:
    if (ctx->pc == 0x3031D8u) {
        ctx->pc = 0x3031D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031D4u;
        // 0x3031d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031DCu;
        goto label_3031dc;
    }
    ctx->pc = 0x3031D4u;
    SET_GPR_U32(ctx, 31, 0x3031DCu);
    ctx->pc = 0x3031D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3031D4u;
    // 0x3031d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302FF0u, 0x3031D4u, 0x3031DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031DCu;
label_3031dc:
    // 0x3031dc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3031e0:
    if (ctx->pc == 0x3031E0u) {
        ctx->pc = 0x3031E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031DCu;
        // 0x3031e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031E4u;
        goto label_3031e4;
    }
    ctx->pc = 0x3031DCu;
    {
        const bool branch_taken_0x3031dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3031E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031DCu;
        // 0x3031e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031dc) {
            ctx->pc = 0x303248u;
            return;
        }
    }
    ctx->pc = 0x3031E4u;
label_3031e4:
    // 0x3031e4: 0x80c2002c  lb          $v0, 0x2C($a2)
    ctx->pc = 0x3031e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
label_3031e8:
    // 0x3031e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3031ec:
    if (ctx->pc == 0x3031ECu) {
        ctx->pc = 0x3031ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031E8u;
        // 0x3031ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031F0u;
        goto label_3031f0;
    }
    ctx->pc = 0x3031E8u;
    {
        const bool branch_taken_0x3031e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3031ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031E8u;
        // 0x3031ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031e8) {
            ctx->pc = 0x3031FCu;
            goto label_3031fc;
        }
    }
    ctx->pc = 0x3031F0u;
label_3031f0:
    // 0x3031f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3031f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3031f4:
    // 0x3031f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3031f8:
    if (ctx->pc == 0x3031F8u) {
        ctx->pc = 0x3031F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031F4u;
        // 0x3031f8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3031FCu;
        goto label_3031fc;
    }
    ctx->pc = 0x3031F4u;
    {
        const bool branch_taken_0x3031f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3031F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031F4u;
        // 0x3031f8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031f4) {
            ctx->pc = 0x303200u;
            goto label_303200;
        }
    }
    ctx->pc = 0x3031FCu;
label_3031fc:
    // 0x3031fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3031fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303200:
    // 0x303200: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_303204:
    if (ctx->pc == 0x303204u) {
        ctx->pc = 0x303204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303200u;
        // 0x303204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303208u;
        goto label_303208;
    }
    ctx->pc = 0x303200u;
    {
        const bool branch_taken_0x303200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303200u;
        // 0x303204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303200) {
            ctx->pc = 0x303248u;
            return;
        }
    }
    ctx->pc = 0x303208u;
label_303208:
    // 0x303208: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x303208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30320c:
    // 0x30320c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30320cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_303210:
    // 0x303210: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x303210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_303214:
    // 0x303214: 0x40f809  jalr        $v0
label_303218:
    if (ctx->pc == 0x303218u) {
        ctx->pc = 0x303218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303214u;
        // 0x303218: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30321Cu;
        goto label_30321c;
    }
    ctx->pc = 0x303214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30321Cu);
        ctx->pc = 0x303218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303214u;
        // 0x303218: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303214u, 0x30321Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30321Cu;
label_30321c:
    // 0x30321c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_303220:
    // 0x303220: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_303224:
    if (ctx->pc == 0x303224u) {
        ctx->pc = 0x303224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303220u;
        // 0x303224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303228u;
        goto label_303228;
    }
    ctx->pc = 0x303220u;
    {
        const bool branch_taken_0x303220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x303224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303220u;
        // 0x303224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303220) {
            ctx->pc = 0x303248u;
            return;
        }
    }
    ctx->pc = 0x303228u;
label_303228:
    // 0x303228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30322c:
    // 0x30322c: 0xc0b1d36  jal         func_2C74D8
label_303230:
    if (ctx->pc == 0x303230u) {
        ctx->pc = 0x303230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30322Cu;
        // 0x303230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303234u;
        goto label_303234;
    }
    ctx->pc = 0x30322Cu;
    SET_GPR_U32(ctx, 31, 0x303234u);
    ctx->pc = 0x303230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30322Cu;
    // 0x303230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C74D8u, 0x30322Cu, 0x303234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303234u;
label_303234:
    // 0x303234: 0x10000004  b           . + 4 + (0x4 << 2)
label_303238:
    if (ctx->pc == 0x303238u) {
        ctx->pc = 0x303238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303234u;
        // 0x303238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30323Cu;
        goto label_fallthrough_0x303234;
    }
    ctx->pc = 0x303234u;
    {
        const bool branch_taken_0x303234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303234u;
        // 0x303238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303234) {
            ctx->pc = 0x303248u;
            return;
        }
    }
label_fallthrough_0x303234:
    ctx->pc = 0x30323Cu;
}
