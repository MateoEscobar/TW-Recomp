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

// Function: sub_002690F0
// Address: 0x2690f0 - 0x269250
void sub_002690F0_0x2690f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002690F0_0x2690f0");
#endif

    switch (ctx->pc) {
        case 0x2690f0u: goto label_2690f0;
        case 0x2690f4u: goto label_2690f4;
        case 0x2690f8u: goto label_2690f8;
        case 0x2690fcu: goto label_2690fc;
        case 0x269100u: goto label_269100;
        case 0x269104u: goto label_269104;
        case 0x269108u: goto label_269108;
        case 0x26910cu: goto label_26910c;
        case 0x269110u: goto label_269110;
        case 0x269114u: goto label_269114;
        case 0x269118u: goto label_269118;
        case 0x26911cu: goto label_26911c;
        case 0x269120u: goto label_269120;
        case 0x269124u: goto label_269124;
        case 0x269128u: goto label_269128;
        case 0x26912cu: goto label_26912c;
        case 0x269130u: goto label_269130;
        case 0x269134u: goto label_269134;
        case 0x269138u: goto label_269138;
        case 0x26913cu: goto label_26913c;
        case 0x269140u: goto label_269140;
        case 0x269144u: goto label_269144;
        case 0x269148u: goto label_269148;
        case 0x26914cu: goto label_26914c;
        case 0x269150u: goto label_269150;
        case 0x269154u: goto label_269154;
        case 0x269158u: goto label_269158;
        case 0x26915cu: goto label_26915c;
        case 0x269160u: goto label_269160;
        case 0x269164u: goto label_269164;
        case 0x269168u: goto label_269168;
        case 0x26916cu: goto label_26916c;
        case 0x269170u: goto label_269170;
        case 0x269174u: goto label_269174;
        case 0x269178u: goto label_269178;
        case 0x26917cu: goto label_26917c;
        case 0x269180u: goto label_269180;
        case 0x269184u: goto label_269184;
        case 0x269188u: goto label_269188;
        case 0x26918cu: goto label_26918c;
        case 0x269190u: goto label_269190;
        case 0x269194u: goto label_269194;
        case 0x269198u: goto label_269198;
        case 0x26919cu: goto label_26919c;
        case 0x2691a0u: goto label_2691a0;
        case 0x2691a4u: goto label_2691a4;
        case 0x2691a8u: goto label_2691a8;
        case 0x2691acu: goto label_2691ac;
        case 0x2691b0u: goto label_2691b0;
        case 0x2691b4u: goto label_2691b4;
        case 0x2691b8u: goto label_2691b8;
        case 0x2691bcu: goto label_2691bc;
        case 0x2691c0u: goto label_2691c0;
        case 0x2691c4u: goto label_2691c4;
        case 0x2691c8u: goto label_2691c8;
        case 0x2691ccu: goto label_2691cc;
        case 0x2691d0u: goto label_2691d0;
        case 0x2691d4u: goto label_2691d4;
        case 0x2691d8u: goto label_2691d8;
        case 0x2691dcu: goto label_2691dc;
        case 0x2691e0u: goto label_2691e0;
        case 0x2691e4u: goto label_2691e4;
        case 0x2691e8u: goto label_2691e8;
        case 0x2691ecu: goto label_2691ec;
        case 0x2691f0u: goto label_2691f0;
        case 0x2691f4u: goto label_2691f4;
        case 0x2691f8u: goto label_2691f8;
        case 0x2691fcu: goto label_2691fc;
        case 0x269200u: goto label_269200;
        case 0x269204u: goto label_269204;
        case 0x269208u: goto label_269208;
        case 0x26920cu: goto label_26920c;
        case 0x269210u: goto label_269210;
        case 0x269214u: goto label_269214;
        case 0x269218u: goto label_269218;
        case 0x26921cu: goto label_26921c;
        case 0x269220u: goto label_269220;
        case 0x269224u: goto label_269224;
        case 0x269228u: goto label_269228;
        case 0x26922cu: goto label_26922c;
        case 0x269230u: goto label_269230;
        case 0x269234u: goto label_269234;
        case 0x269238u: goto label_269238;
        case 0x26923cu: goto label_26923c;
        case 0x269240u: goto label_269240;
        case 0x269244u: goto label_269244;
        case 0x269248u: goto label_269248;
        case 0x26924cu: goto label_26924c;
        default: break;
    }

    ctx->pc = 0x2690f0u;

label_2690f0:
    // 0x2690f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2690f4:
    // 0x2690f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2690f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2690f8:
    // 0x2690f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2690f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2690fc:
    // 0x2690fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2690fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_269100:
    // 0x269100: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x269100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_269104:
    // 0x269104: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x269104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_269108:
    // 0x269108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26910c:
    // 0x26910c: 0xc08bf92  jal         func_22FE48
label_269110:
    if (ctx->pc == 0x269110u) {
        ctx->pc = 0x269110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26910Cu;
        // 0x269110: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269114u;
        goto label_269114;
    }
    ctx->pc = 0x26910Cu;
    SET_GPR_U32(ctx, 31, 0x269114u);
    ctx->pc = 0x269110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26910Cu;
    // 0x269110: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26910Cu, 0x269114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269114u;
label_269114:
    // 0x269114: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x269114u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_269118:
    // 0x269118: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x269118u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26911c:
    // 0x26911c: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26911cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_269120:
    // 0x269120: 0xc041532  jal         func_1054C8
label_269124:
    if (ctx->pc == 0x269124u) {
        ctx->pc = 0x269124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269120u;
        // 0x269124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269128u;
        goto label_269128;
    }
    ctx->pc = 0x269120u;
    SET_GPR_U32(ctx, 31, 0x269128u);
    ctx->pc = 0x269124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269120u;
    // 0x269124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269120u, 0x269128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269128u;
label_269128:
    // 0x269128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26912c:
    // 0x26912c: 0xc041532  jal         func_1054C8
label_269130:
    if (ctx->pc == 0x269130u) {
        ctx->pc = 0x269130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26912Cu;
        // 0x269130: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269134u;
        goto label_269134;
    }
    ctx->pc = 0x26912Cu;
    SET_GPR_U32(ctx, 31, 0x269134u);
    ctx->pc = 0x269130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26912Cu;
    // 0x269130: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26912Cu, 0x269134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269134u;
label_269134:
    // 0x269134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269138:
    // 0x269138: 0xc041532  jal         func_1054C8
label_26913c:
    if (ctx->pc == 0x26913Cu) {
        ctx->pc = 0x26913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269138u;
        // 0x26913c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269140u;
        goto label_269140;
    }
    ctx->pc = 0x269138u;
    SET_GPR_U32(ctx, 31, 0x269140u);
    ctx->pc = 0x26913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269138u;
    // 0x26913c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269138u, 0x269140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269140u;
label_269140:
    // 0x269140: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_269144:
    if (ctx->pc == 0x269144u) {
        ctx->pc = 0x269144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269140u;
        // 0x269144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269148u;
        goto label_269148;
    }
    ctx->pc = 0x269140u;
    {
        const bool branch_taken_0x269140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x269144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269140u;
        // 0x269144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269140) {
            ctx->pc = 0x269168u;
            goto label_269168;
        }
    }
    ctx->pc = 0x269148u;
label_269148:
    // 0x269148: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26914c:
    // 0x26914c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_269150:
    // 0x269150: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269154:
    // 0x269154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269158:
    // 0x269158: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26915c:
    // 0x26915c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26915cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269160:
    // 0x269160: 0xc04159e  jal         func_105678
label_269164:
    if (ctx->pc == 0x269164u) {
        ctx->pc = 0x269164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269160u;
        // 0x269164: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269168u;
        goto label_269168;
    }
    ctx->pc = 0x269160u;
    SET_GPR_U32(ctx, 31, 0x269168u);
    ctx->pc = 0x269164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269160u;
    // 0x269164: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x269160u, 0x269168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269168u;
label_269168:
    // 0x269168: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26916c:
    // 0x26916c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_269170:
    // 0x269170: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_269174:
    if (ctx->pc == 0x269174u) {
        ctx->pc = 0x269174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269170u;
        // 0x269174: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269178u;
        goto label_269178;
    }
    ctx->pc = 0x269170u;
    {
        const bool branch_taken_0x269170 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x269174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269170u;
        // 0x269174: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269170) {
            ctx->pc = 0x2691B8u;
            goto label_2691b8;
        }
    }
    ctx->pc = 0x269178u;
label_269178:
    // 0x269178: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26917c:
    // 0x26917c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269180:
    // 0x269180: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_269184:
    // 0x269184: 0x40f809  jalr        $v0
label_269188:
    if (ctx->pc == 0x269188u) {
        ctx->pc = 0x269188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269184u;
        // 0x269188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26918Cu;
        goto label_26918c;
    }
    ctx->pc = 0x269184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26918Cu);
        ctx->pc = 0x269188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269184u;
        // 0x269188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269184u, 0x26918Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26918Cu;
label_26918c:
    // 0x26918c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_269190:
    // 0x269190: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x269190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_269194:
    // 0x269194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269198:
    // 0x269198: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x269198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26919c:
    // 0x26919c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26919cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2691a0:
    // 0x2691a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2691a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2691a4:
    // 0x2691a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2691a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2691a8:
    // 0x2691a8: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x2691a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2691ac:
    // 0x2691ac: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x2691acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_2691b0:
    // 0x2691b0: 0xc041664  jal         func_105990
label_2691b4:
    if (ctx->pc == 0x2691B4u) {
        ctx->pc = 0x2691B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B0u;
        // 0x2691b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691B8u;
        goto label_2691b8;
    }
    ctx->pc = 0x2691B0u;
    SET_GPR_U32(ctx, 31, 0x2691B8u);
    ctx->pc = 0x2691B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691B0u;
    // 0x2691b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2691B0u, 0x2691B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691B8u;
label_2691b8:
    // 0x2691b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2691bc:
    if (ctx->pc == 0x2691BCu) {
        ctx->pc = 0x2691BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B8u;
        // 0x2691bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691C0u;
        goto label_2691c0;
    }
    ctx->pc = 0x2691B8u;
    {
        const bool branch_taken_0x2691b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B8u;
        // 0x2691bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691b8) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x2691C0u;
label_2691c0:
    // 0x2691c0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2691c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2691c4:
    // 0x2691c4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2691c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2691c8:
    // 0x2691c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2691c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2691cc:
    // 0x2691cc: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x2691ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_2691d0:
    // 0x2691d0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2691d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2691d4:
    // 0x2691d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2691d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2691d8:
    // 0x2691d8: 0xc041b20  jal         func_106C80
label_2691dc:
    if (ctx->pc == 0x2691DCu) {
        ctx->pc = 0x2691DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691D8u;
        // 0x2691dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691E0u;
        goto label_2691e0;
    }
    ctx->pc = 0x2691D8u;
    SET_GPR_U32(ctx, 31, 0x2691E0u);
    ctx->pc = 0x2691DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691D8u;
    // 0x2691dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2691D8u, 0x2691E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691E0u;
label_2691e0:
    // 0x2691e0: 0xc05d484  jal         func_175210
label_2691e4:
    if (ctx->pc == 0x2691E4u) {
        ctx->pc = 0x2691E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691E0u;
        // 0x2691e4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691E8u;
        goto label_2691e8;
    }
    ctx->pc = 0x2691E0u;
    SET_GPR_U32(ctx, 31, 0x2691E8u);
    ctx->pc = 0x2691E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691E0u;
    // 0x2691e4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2691E0u, 0x2691E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691E8u;
label_2691e8:
    // 0x2691e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2691e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2691ec:
    // 0x2691ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2691ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2691f0:
    // 0x2691f0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2691f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2691f4:
    // 0x2691f4: 0xa0f809  jalr        $a1
label_2691f8:
    if (ctx->pc == 0x2691F8u) {
        ctx->pc = 0x2691F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691F4u;
        // 0x2691f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691FCu;
        goto label_2691fc;
    }
    ctx->pc = 0x2691F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2691FCu);
        ctx->pc = 0x2691F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691F4u;
        // 0x2691f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2691F4u, 0x2691FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2691FCu;
label_2691fc:
    // 0x2691fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2691fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269200:
    // 0x269200: 0xc087016  jal         func_21C058
label_269204:
    if (ctx->pc == 0x269204u) {
        ctx->pc = 0x269204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269200u;
        // 0x269204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269208u;
        goto label_269208;
    }
    ctx->pc = 0x269200u;
    SET_GPR_U32(ctx, 31, 0x269208u);
    ctx->pc = 0x269204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269200u;
    // 0x269204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x269200u, 0x269208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269208u;
label_269208:
    // 0x269208: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26920c:
    // 0x26920c: 0xc05d53a  jal         func_1754E8
label_269210:
    if (ctx->pc == 0x269210u) {
        ctx->pc = 0x269210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26920Cu;
        // 0x269210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269214u;
        goto label_269214;
    }
    ctx->pc = 0x26920Cu;
    SET_GPR_U32(ctx, 31, 0x269214u);
    ctx->pc = 0x269210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26920Cu;
    // 0x269210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26920Cu, 0x269214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269214u;
label_269214:
    // 0x269214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269218:
    // 0x269218: 0xc05d4f6  jal         func_1753D8
label_26921c:
    if (ctx->pc == 0x26921Cu) {
        ctx->pc = 0x26921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269218u;
        // 0x26921c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269220u;
        goto label_269220;
    }
    ctx->pc = 0x269218u;
    SET_GPR_U32(ctx, 31, 0x269220u);
    ctx->pc = 0x26921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269218u;
    // 0x26921c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x269218u, 0x269220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269220u;
label_269220:
    // 0x269220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269224:
    // 0x269224: 0xc089990  jal         func_226640
label_269228:
    if (ctx->pc == 0x269228u) {
        ctx->pc = 0x269228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269224u;
        // 0x269228: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26922Cu;
        goto label_26922c;
    }
    ctx->pc = 0x269224u;
    SET_GPR_U32(ctx, 31, 0x26922Cu);
    ctx->pc = 0x269228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269224u;
    // 0x269228: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x269224u, 0x26922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26922Cu;
label_26922c:
    // 0x26922c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26922cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_269230:
    // 0x269230: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x269230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269234:
    // 0x269234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x269234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269238:
    // 0x269238: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x269238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26923c:
    // 0x26923c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26923cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269240:
    // 0x269240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269244:
    // 0x269244: 0x3e00008  jr          $ra
label_269248:
    if (ctx->pc == 0x269248u) {
        ctx->pc = 0x269248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269244u;
        // 0x269248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26924Cu;
        goto label_26924c;
    }
    ctx->pc = 0x269244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269244u;
        // 0x269248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26924Cu;
label_26924c:
    // 0x26924c: 0x0  nop
    ctx->pc = 0x26924cu;
    // NOP
    ctx->pc = 0x269250u;
}
