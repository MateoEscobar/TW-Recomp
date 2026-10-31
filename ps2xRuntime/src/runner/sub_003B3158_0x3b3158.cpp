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

// Function: sub_003B3158
// Address: 0x3b3158 - 0x3b3204
void sub_003B3158_0x3b3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3158_0x3b3158");
#endif

    switch (ctx->pc) {
        case 0x3b3158u: goto label_3b3158;
        case 0x3b315cu: goto label_3b315c;
        case 0x3b3160u: goto label_3b3160;
        case 0x3b3164u: goto label_3b3164;
        case 0x3b3168u: goto label_3b3168;
        case 0x3b316cu: goto label_3b316c;
        case 0x3b3170u: goto label_3b3170;
        case 0x3b3174u: goto label_3b3174;
        case 0x3b3178u: goto label_3b3178;
        case 0x3b317cu: goto label_3b317c;
        case 0x3b3180u: goto label_3b3180;
        case 0x3b3184u: goto label_3b3184;
        case 0x3b3188u: goto label_3b3188;
        case 0x3b318cu: goto label_3b318c;
        case 0x3b3190u: goto label_3b3190;
        case 0x3b3194u: goto label_3b3194;
        case 0x3b3198u: goto label_3b3198;
        case 0x3b319cu: goto label_3b319c;
        case 0x3b31a0u: goto label_3b31a0;
        case 0x3b31a4u: goto label_3b31a4;
        case 0x3b31a8u: goto label_3b31a8;
        case 0x3b31acu: goto label_3b31ac;
        case 0x3b31b0u: goto label_3b31b0;
        case 0x3b31b4u: goto label_3b31b4;
        case 0x3b31b8u: goto label_3b31b8;
        case 0x3b31bcu: goto label_3b31bc;
        case 0x3b31c0u: goto label_3b31c0;
        case 0x3b31c4u: goto label_3b31c4;
        case 0x3b31c8u: goto label_3b31c8;
        case 0x3b31ccu: goto label_3b31cc;
        case 0x3b31d0u: goto label_3b31d0;
        case 0x3b31d4u: goto label_3b31d4;
        case 0x3b31d8u: goto label_3b31d8;
        case 0x3b31dcu: goto label_3b31dc;
        case 0x3b31e0u: goto label_3b31e0;
        case 0x3b31e4u: goto label_3b31e4;
        case 0x3b31e8u: goto label_3b31e8;
        case 0x3b31ecu: goto label_3b31ec;
        case 0x3b31f0u: goto label_3b31f0;
        case 0x3b31f4u: goto label_3b31f4;
        case 0x3b31f8u: goto label_3b31f8;
        case 0x3b31fcu: goto label_3b31fc;
        case 0x3b3200u: goto label_3b3200;
        default: break;
    }

    ctx->pc = 0x3b3158u;

label_3b3158:
    // 0x3b3158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b315c:
    // 0x3b315c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b3160:
    // 0x3b3160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b3160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b3164:
    // 0x3b3164: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b3164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b3168:
    // 0x3b3168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b3168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b316c:
    // 0x3b316c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b316cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3170:
    // 0x3b3170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b3174:
    // 0x3b3174: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b3174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b3178:
    // 0x3b3178: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b317c:
    // 0x3b317c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b317cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b3180:
    // 0x3b3180: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b3180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b3184:
    // 0x3b3184: 0x40f809  jalr        $v0
label_3b3188:
    if (ctx->pc == 0x3B3188u) {
        ctx->pc = 0x3B3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3184u;
        // 0x3b3188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B318Cu;
        goto label_3b318c;
    }
    ctx->pc = 0x3B3184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B318Cu);
        ctx->pc = 0x3B3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3184u;
        // 0x3b3188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3184u, 0x3B318Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B318Cu;
label_3b318c:
    // 0x3b318c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3b318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3b3190:
    // 0x3b3190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b3190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3194:
    // 0x3b3194: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x3b3194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3b3198:
    // 0x3b3198: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3b319c:
    if (ctx->pc == 0x3B319Cu) {
        ctx->pc = 0x3B319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3198u;
        // 0x3b319c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31A0u;
        goto label_3b31a0;
    }
    ctx->pc = 0x3B3198u;
    {
        const bool branch_taken_0x3b3198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3198u;
        // 0x3b319c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3198) {
            ctx->pc = 0x3B3204u;
            return;
        }
    }
    ctx->pc = 0x3B31A0u;
label_3b31a0:
    // 0x3b31a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b31a4:
    // 0x3b31a4: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x3b31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
label_3b31a8:
    // 0x3b31a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b31ac:
    // 0x3b31ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b31acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b31b0:
    // 0x3b31b0: 0x800008  jr          $a0
label_3b31b4:
    if (ctx->pc == 0x3B31B4u) {
        ctx->pc = 0x3B31B8u;
        goto label_3b31b8;
    }
    ctx->pc = 0x3B31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B31B8u: goto label_3b31b8;
            case 0x3B31D0u: goto label_3b31d0;
            case 0x3B31F0u: goto label_3b31f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B31B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B31B8u;
label_3b31b8:
    // 0x3b31b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b31b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b31bc:
    // 0x3b31bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b31bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b31c0:
    // 0x3b31c0: 0xc0ec860  jal         func_3B2180
label_3b31c4:
    if (ctx->pc == 0x3B31C4u) {
        ctx->pc = 0x3B31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31C0u;
        // 0x3b31c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31C8u;
        goto label_3b31c8;
    }
    ctx->pc = 0x3B31C0u;
    SET_GPR_U32(ctx, 31, 0x3B31C8u);
    ctx->pc = 0x3B31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31C0u;
    // 0x3b31c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2180u, 0x3B31C0u, 0x3B31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31C8u;
label_3b31c8:
    // 0x3b31c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3b31cc:
    if (ctx->pc == 0x3B31CCu) {
        ctx->pc = 0x3B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31C8u;
        // 0x3b31cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31D0u;
        goto label_3b31d0;
    }
    ctx->pc = 0x3B31C8u;
    {
        const bool branch_taken_0x3b31c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31C8u;
        // 0x3b31cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31c8) {
            ctx->pc = 0x3B3208u;
            return;
        }
    }
    ctx->pc = 0x3B31D0u;
label_3b31d0:
    // 0x3b31d0: 0xc0ea146  jal         func_3A8518
label_3b31d4:
    if (ctx->pc == 0x3B31D4u) {
        ctx->pc = 0x3B31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31D0u;
        // 0x3b31d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31D8u;
        goto label_3b31d8;
    }
    ctx->pc = 0x3B31D0u;
    SET_GPR_U32(ctx, 31, 0x3B31D8u);
    ctx->pc = 0x3B31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31D0u;
    // 0x3b31d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B31D0u, 0x3B31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31D8u;
label_3b31d8:
    // 0x3b31d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b31dc:
    // 0x3b31dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b31e0:
    // 0x3b31e0: 0xc0e9bb2  jal         func_3A6EC8
label_3b31e4:
    if (ctx->pc == 0x3B31E4u) {
        ctx->pc = 0x3B31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31E0u;
        // 0x3b31e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31E8u;
        goto label_3b31e8;
    }
    ctx->pc = 0x3B31E0u;
    SET_GPR_U32(ctx, 31, 0x3B31E8u);
    ctx->pc = 0x3B31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31E0u;
    // 0x3b31e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B31E0u, 0x3B31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31E8u;
label_3b31e8:
    // 0x3b31e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b31ec:
    if (ctx->pc == 0x3B31ECu) {
        ctx->pc = 0x3B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31E8u;
        // 0x3b31ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31F0u;
        goto label_3b31f0;
    }
    ctx->pc = 0x3B31E8u;
    {
        const bool branch_taken_0x3b31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31E8u;
        // 0x3b31ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31e8) {
            ctx->pc = 0x3B3208u;
            return;
        }
    }
    ctx->pc = 0x3B31F0u;
label_3b31f0:
    // 0x3b31f0: 0xc0ea146  jal         func_3A8518
label_3b31f4:
    if (ctx->pc == 0x3B31F4u) {
        ctx->pc = 0x3B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31F0u;
        // 0x3b31f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31F8u;
        goto label_3b31f8;
    }
    ctx->pc = 0x3B31F0u;
    SET_GPR_U32(ctx, 31, 0x3B31F8u);
    ctx->pc = 0x3B31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31F0u;
    // 0x3b31f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B31F0u, 0x3B31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31F8u;
label_3b31f8:
    // 0x3b31f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b31f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b31fc:
    // 0x3b31fc: 0xc0e85fa  jal         func_3A17E8
label_3b3200:
    if (ctx->pc == 0x3B3200u) {
        ctx->pc = 0x3B3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31FCu;
        // 0x3b3200: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3204u;
        goto label_fallthrough_0x3b31fc;
    }
    ctx->pc = 0x3B31FCu;
    SET_GPR_U32(ctx, 31, 0x3B3204u);
    ctx->pc = 0x3B3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31FCu;
    // 0x3b3200: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3B31FCu, 0x3B3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3b31fc:
    ctx->pc = 0x3B3204u;
}
