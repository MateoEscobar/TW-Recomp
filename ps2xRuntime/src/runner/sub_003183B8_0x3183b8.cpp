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

// Function: sub_003183B8
// Address: 0x3183b8 - 0x318770
void sub_003183B8_0x3183b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003183B8_0x3183b8");
#endif

    switch (ctx->pc) {
        case 0x318404u: goto label_318404;
        case 0x318440u: goto label_318440;
        case 0x318450u: goto label_318450;
        case 0x31845cu: goto label_31845c;
        case 0x318478u: goto label_318478;
        case 0x318488u: goto label_318488;
        case 0x318494u: goto label_318494;
        case 0x3184b0u: goto label_3184b0;
        case 0x3184c4u: goto label_3184c4;
        case 0x3184e8u: goto label_3184e8;
        case 0x3184f4u: goto label_3184f4;
        case 0x318518u: goto label_318518;
        case 0x318520u: goto label_318520;
        case 0x318528u: goto label_318528;
        case 0x31855cu: goto label_31855c;
        case 0x318584u: goto label_318584;
        case 0x31859cu: goto label_31859c;
        case 0x3185b8u: goto label_3185b8;
        case 0x3185d8u: goto label_3185d8;
        case 0x3185f0u: goto label_3185f0;
        case 0x318640u: goto label_318640;
        case 0x318648u: goto label_318648;
        case 0x318650u: goto label_318650;
        case 0x318660u: goto label_318660;
        case 0x318670u: goto label_318670;
        case 0x3186ecu: goto label_3186ec;
        case 0x31871cu: goto label_31871c;
        case 0x31872cu: goto label_31872c;
        default: break;
    }

    ctx->pc = 0x3183b8u;

    // 0x3183b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3183b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3183bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3183bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3183c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3183c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3183c4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3183c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3183c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3183c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183cc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3183ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3183d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3183d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3183d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3183d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3183d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3183d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3183dc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3183dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3183e0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3183e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3183e4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3183e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3183e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3183e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3183ec: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3183ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3183f0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3183f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3183f4: 0x104300d0  beq         $v0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x3183F4u;
    {
        const bool branch_taken_0x3183f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3183F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183F4u;
        // 0x3183f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183f4) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x3183FCu;
    // 0x3183fc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3183FCu;
    SET_GPR_U32(ctx, 31, 0x318404u);
    ctx->pc = 0x318400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183FCu;
    // 0x318400: 0x86640020  lh          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3183FCu, 0x318404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318404u;
label_318404:
    // 0x318404: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x318404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318408: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x318408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x31840c: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x31840Cu;
    {
        const bool branch_taken_0x31840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31840Cu;
        // 0x318410: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31840c) {
            ctx->pc = 0x31871Cu;
            goto label_31871c;
        }
    }
    ctx->pc = 0x318414u;
    // 0x318414: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x318414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x318418: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x318418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x31841c: 0x8c560048  lw          $s6, 0x48($v0)
    ctx->pc = 0x31841cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x318420: 0x76182b  sltu        $v1, $v1, $s6
    ctx->pc = 0x318420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x318424: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x318424u;
    {
        const bool branch_taken_0x318424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318424u;
        // 0x318428: 0xae600048  sw          $zero, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318424) {
            ctx->pc = 0x318608u;
            goto label_318608;
        }
    }
    ctx->pc = 0x31842Cu;
    // 0x31842c: 0x26c20096  addiu       $v0, $s6, 0x96
    ctx->pc = 0x31842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 150));
    // 0x318430: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318434: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x318434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x318438: 0xc059856  jal         func_166158
    ctx->pc = 0x318438u;
    SET_GPR_U32(ctx, 31, 0x318440u);
    ctx->pc = 0x31843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318438u;
    // 0x31843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x318438u, 0x318440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318440u;
label_318440:
    // 0x318440: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x318440u;
    {
        const bool branch_taken_0x318440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318440u;
        // 0x318444: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318440) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318448u;
    // 0x318448: 0xc05959e  jal         func_165678
    ctx->pc = 0x318448u;
    SET_GPR_U32(ctx, 31, 0x318450u);
    ctx->pc = 0x31844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318448u;
    // 0x31844c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x318448u, 0x318450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318450u;
label_318450:
    // 0x318450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318454: 0xc05959e  jal         func_165678
    ctx->pc = 0x318454u;
    SET_GPR_U32(ctx, 31, 0x31845Cu);
    ctx->pc = 0x318458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318454u;
    // 0x318458: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x318454u, 0x31845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31845Cu;
label_31845c:
    // 0x31845c: 0x122000af  beqz        $s1, . + 4 + (0xAF << 2)
    ctx->pc = 0x31845Cu;
    {
        const bool branch_taken_0x31845c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x318460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31845Cu;
        // 0x318460: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31845c) {
            ctx->pc = 0x31871Cu;
            goto label_31871c;
        }
    }
    ctx->pc = 0x318464u;
    // 0x318464: 0x124000b4  beqz        $s2, . + 4 + (0xB4 << 2)
    ctx->pc = 0x318464u;
    {
        const bool branch_taken_0x318464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x318468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318464u;
        // 0x318468: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318464) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x31846Cu;
    // 0x31846c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x31846cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x318470: 0xc0594da  jal         func_165368
    ctx->pc = 0x318470u;
    SET_GPR_U32(ctx, 31, 0x318478u);
    ctx->pc = 0x318474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318470u;
    // 0x318474: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165368u, 0x318470u, 0x318478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318478u;
label_318478:
    // 0x318478: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x318478u;
    {
        const bool branch_taken_0x318478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318478) {
            ctx->pc = 0x31847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318478u;
            // 0x31847c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3184BCu;
            goto label_3184bc;
        }
    }
    ctx->pc = 0x318480u;
    // 0x318480: 0xc087420  jal         func_21D080
    ctx->pc = 0x318480u;
    SET_GPR_U32(ctx, 31, 0x318488u);
    ctx->pc = 0x318484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318480u;
    // 0x318484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x318480u, 0x318488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318488u;
label_318488:
    // 0x318488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31848c: 0xc087420  jal         func_21D080
    ctx->pc = 0x31848Cu;
    SET_GPR_U32(ctx, 31, 0x318494u);
    ctx->pc = 0x318490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31848Cu;
    // 0x318490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x31848Cu, 0x318494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318494u;
label_318494:
    // 0x318494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x318498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31849c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31849cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3184a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3184a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a8: 0xc09381e  jal         func_24E078
    ctx->pc = 0x3184A8u;
    SET_GPR_U32(ctx, 31, 0x3184B0u);
    ctx->pc = 0x3184ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184A8u;
    // 0x3184ac: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x3184A8u, 0x3184B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184B0u;
label_3184b0:
    // 0x3184b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3184B0u;
    {
        const bool branch_taken_0x3184b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3184b0) {
            ctx->pc = 0x3184B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3184B0u;
            // 0x3184b4: 0x9662004c  lhu         $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3184D8u;
            goto label_3184d8;
        }
    }
    ctx->pc = 0x3184B8u;
    // 0x3184b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3184b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3184bc:
    // 0x3184bc: 0xc0596a8  jal         func_165AA0
    ctx->pc = 0x3184BCu;
    SET_GPR_U32(ctx, 31, 0x3184C4u);
    ctx->pc = 0x3184C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184BCu;
    // 0x3184c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165AA0u, 0x3184BCu, 0x3184C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184C4u;
label_3184c4:
    // 0x3184c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3184c8: 0x14430092  bne         $v0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x3184C8u;
    {
        const bool branch_taken_0x3184c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3184CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184C8u;
        // 0x3184cc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184c8) {
            ctx->pc = 0x318714u;
            goto label_318714;
        }
    }
    ctx->pc = 0x3184D0u;
    // 0x3184d0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3184D0u;
    {
        const bool branch_taken_0x3184d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184D0u;
        // 0x3184d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184d0) {
            ctx->pc = 0x31873Cu;
            goto label_31873c;
        }
    }
    ctx->pc = 0x3184D8u;
label_3184d8:
    // 0x3184d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3184D8u;
    {
        const bool branch_taken_0x3184d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3184d8) {
            ctx->pc = 0x3184DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3184D8u;
            // 0x3184dc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318500u;
            goto label_318500;
        }
    }
    ctx->pc = 0x3184E0u;
    // 0x3184e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x3184E0u;
    SET_GPR_U32(ctx, 31, 0x3184E8u);
    ctx->pc = 0x3184E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184E0u;
    // 0x3184e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3184E0u, 0x3184E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184E8u;
label_3184e8:
    // 0x3184e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3184e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184ec: 0xc0a4162  jal         func_290588
    ctx->pc = 0x3184ECu;
    SET_GPR_U32(ctx, 31, 0x3184F4u);
    ctx->pc = 0x3184F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184ECu;
    // 0x3184f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x3184ECu, 0x3184F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184F4u;
label_3184f4:
    // 0x3184f4: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3184F4u;
    {
        const bool branch_taken_0x3184f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184F4u;
        // 0x3184f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184f4) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x3184FCu;
    // 0x3184fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3184fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_318500:
    // 0x318500: 0x26970048  addiu       $s7, $s4, 0x48
    ctx->pc = 0x318500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x318504: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x318504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318508: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x318508u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31850c: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x31850cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x318510: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318514: 0x0  nop
    ctx->pc = 0x318514u;
    // NOP
label_318518:
    // 0x318518: 0xc137826  jal         func_4DE098
    ctx->pc = 0x318518u;
    SET_GPR_U32(ctx, 31, 0x318520u);
    ctx->pc = 0x31851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318518u;
    // 0x31851c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318518u, 0x318520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318520u;
label_318520:
    // 0x318520: 0xc0e409a  jal         func_390268
    ctx->pc = 0x318520u;
    SET_GPR_U32(ctx, 31, 0x318528u);
    ctx->pc = 0x318524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318520u;
    // 0x318524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318520u, 0x318528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318528u;
label_318528:
    // 0x318528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31852c: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31852Cu;
    {
        const bool branch_taken_0x31852c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31852Cu;
        // 0x318530: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31852c) {
            ctx->pc = 0x3185F8u;
            goto label_3185f8;
        }
    }
    ctx->pc = 0x318534u;
    // 0x318534: 0x86060092  lh          $a2, 0x92($s0)
    ctx->pc = 0x318534u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x318538: 0x2448bf60  addiu       $t0, $v0, -0x40A0
    ctx->pc = 0x318538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950752));
    // 0x31853c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318540: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x318540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x318544: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x318544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x318548: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x318548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x31854c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318550: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x318550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318554: 0xc0a734c  jal         func_29CD30
    ctx->pc = 0x318554u;
    SET_GPR_U32(ctx, 31, 0x31855Cu);
    ctx->pc = 0x318558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318554u;
    // 0x318558: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD30u, 0x318554u, 0x31855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31855Cu;
label_31855c:
    // 0x31855c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31855cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318560: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x318560u;
    {
        const bool branch_taken_0x318560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x318564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318560u;
        // 0x318564: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318560) {
            ctx->pc = 0x3185F8u;
            goto label_3185f8;
        }
    }
    ctx->pc = 0x318568u;
    // 0x318568: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x318568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31856c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318570: 0x0  nop
    ctx->pc = 0x318570u;
    // NOP
    // 0x318574: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x318574u;
    {
        const bool branch_taken_0x318574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318574) {
            ctx->pc = 0x318578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318574u;
            // 0x318578: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3185FCu;
            goto label_3185fc;
        }
    }
    ctx->pc = 0x31857Cu;
    // 0x31857c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31857Cu;
    SET_GPR_U32(ctx, 31, 0x318584u);
    ctx->pc = 0x318580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31857Cu;
    // 0x318580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31857Cu, 0x318584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318584u;
label_318584:
    // 0x318584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318588: 0x922202d5  lbu         $v0, 0x2D5($s1)
    ctx->pc = 0x318588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 725)));
    // 0x31858c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31858Cu;
    {
        const bool branch_taken_0x31858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31858Cu;
        // 0x318590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31858c) {
            ctx->pc = 0x3185E0u;
            goto label_3185e0;
        }
    }
    ctx->pc = 0x318594u;
    // 0x318594: 0xc087502  jal         func_21D408
    ctx->pc = 0x318594u;
    SET_GPR_U32(ctx, 31, 0x31859Cu);
    ctx->pc = 0x318598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318594u;
    // 0x318598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318594u, 0x31859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31859Cu;
label_31859c:
    // 0x31859c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x31859cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x3185a0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3185a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3185a4: 0x507e0015  beql        $v1, $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x3185A4u;
    {
        const bool branch_taken_0x3185a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x3185a4) {
            ctx->pc = 0x3185A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3185A4u;
            // 0x3185a8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3185FCu;
            goto label_3185fc;
        }
    }
    ctx->pc = 0x3185ACu;
    // 0x3185ac: 0xc634012c  lwc1        $f20, 0x12C($s1)
    ctx->pc = 0x3185acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3185b0: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x3185B0u;
    SET_GPR_U32(ctx, 31, 0x3185B8u);
    ctx->pc = 0x3185B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185B0u;
    // 0x3185b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x3185B0u, 0x3185B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185B8u;
label_3185b8:
    // 0x3185b8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3185b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3185bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3185bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3185c0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3185c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x3185c4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3185c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3185c8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3185c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x3185cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3185ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3185d0: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x3185D0u;
    SET_GPR_U32(ctx, 31, 0x3185D8u);
    ctx->pc = 0x3185D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185D0u;
    // 0x3185d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x3185D0u, 0x3185D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185D8u;
label_3185d8:
    // 0x3185d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3185D8u;
    {
        const bool branch_taken_0x3185d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185D8u;
        // 0x3185dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185d8) {
            ctx->pc = 0x3185F8u;
            goto label_3185f8;
        }
    }
    ctx->pc = 0x3185E0u;
label_3185e0:
    // 0x3185e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3185e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3185e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3185e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3185e8: 0xc0888a2  jal         func_222288
    ctx->pc = 0x3185E8u;
    SET_GPR_U32(ctx, 31, 0x3185F0u);
    ctx->pc = 0x3185ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185E8u;
    // 0x3185ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x3185E8u, 0x3185F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185F0u;
label_3185f0:
    // 0x3185f0: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3185F0u;
    {
        const bool branch_taken_0x3185f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3185F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185F0u;
        // 0x3185f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185f0) {
            ctx->pc = 0x318724u;
            goto label_318724;
        }
    }
    ctx->pc = 0x3185F8u;
label_3185f8:
    // 0x3185f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3185f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3185fc:
    // 0x3185fc: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x3185fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x318600: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x318600u;
    {
        const bool branch_taken_0x318600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318600u;
        // 0x318604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318600) {
            ctx->pc = 0x318518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318518;
        }
    }
    ctx->pc = 0x318608u;
label_318608:
    // 0x318608: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x31860c: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x31860cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x318610: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x318610u;
    {
        const bool branch_taken_0x318610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318610u;
        // 0x318614: 0x26c20064  addiu       $v0, $s6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318610) {
            ctx->pc = 0x318734u;
            goto label_318734;
        }
    }
    ctx->pc = 0x318618u;
    // 0x318618: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x318618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31861c: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x31861cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x318620: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x318620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318624: 0x24770048  addiu       $s7, $v1, 0x48
    ctx->pc = 0x318624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x318628: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x318628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31862c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31862cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318630: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x318630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318634: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x318634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318638: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x318638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31863c: 0x0  nop
    ctx->pc = 0x31863cu;
    // NOP
label_318640:
    // 0x318640: 0xc137826  jal         func_4DE098
    ctx->pc = 0x318640u;
    SET_GPR_U32(ctx, 31, 0x318648u);
    ctx->pc = 0x318644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318640u;
    // 0x318644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318640u, 0x318648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318648u;
label_318648:
    // 0x318648: 0xc0e409a  jal         func_390268
    ctx->pc = 0x318648u;
    SET_GPR_U32(ctx, 31, 0x318650u);
    ctx->pc = 0x31864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318648u;
    // 0x31864c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318648u, 0x318650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318650u;
label_318650:
    // 0x318650: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x318650u;
    {
        const bool branch_taken_0x318650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318650) {
            ctx->pc = 0x318654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318650u;
            // 0x318654: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186D4u;
            goto label_3186d4;
        }
    }
    ctx->pc = 0x318658u;
    // 0x318658: 0xc087502  jal         func_21D408
    ctx->pc = 0x318658u;
    SET_GPR_U32(ctx, 31, 0x318660u);
    ctx->pc = 0x31865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318658u;
    // 0x31865c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318658u, 0x318660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318660u;
label_318660:
    // 0x318660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318664: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x318664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x318668: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x318668u;
    SET_GPR_U32(ctx, 31, 0x318670u);
    ctx->pc = 0x31866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318668u;
    // 0x31866c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x318668u, 0x318670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318670u;
label_318670:
    // 0x318670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x318670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318674: 0x507e0017  beql        $v1, $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x318674u;
    {
        const bool branch_taken_0x318674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x318674) {
            ctx->pc = 0x318678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318674u;
            // 0x318678: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186D4u;
            goto label_3186d4;
        }
    }
    ctx->pc = 0x31867Cu;
    // 0x31867c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31867Cu;
    {
        const bool branch_taken_0x31867c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x318680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31867Cu;
        // 0x318680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31867c) {
            ctx->pc = 0x3186A0u;
            goto label_3186a0;
        }
    }
    ctx->pc = 0x318684u;
    // 0x318684: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x318688: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x318688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31868c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31868Cu;
    {
        const bool branch_taken_0x31868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31868c) {
            ctx->pc = 0x318690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31868Cu;
            // 0x318690: 0x90820055  lbu         $v0, 0x55($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186A4u;
            goto label_3186a4;
        }
    }
    ctx->pc = 0x318694u;
    // 0x318694: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x318694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x318698: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x318698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31869c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x31869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3186a0:
    // 0x3186a0: 0x90820055  lbu         $v0, 0x55($a0)
    ctx->pc = 0x3186a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_3186a4:
    // 0x3186a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3186A4u;
    {
        const bool branch_taken_0x3186a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3186a4) {
            ctx->pc = 0x3186A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3186A4u;
            // 0x3186a8: 0x90820059  lbu         $v0, 0x59($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186B8u;
            goto label_3186b8;
        }
    }
    ctx->pc = 0x3186ACu;
    // 0x3186ac: 0x9082005d  lbu         $v0, 0x5D($a0)
    ctx->pc = 0x3186acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
    // 0x3186b0: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x3186b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x3186b4: 0x90820059  lbu         $v0, 0x59($a0)
    ctx->pc = 0x3186b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
label_3186b8:
    // 0x3186b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3186B8u;
    {
        const bool branch_taken_0x3186b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186B8u;
        // 0x3186bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186b8) {
            ctx->pc = 0x3186CCu;
            goto label_3186cc;
        }
    }
    ctx->pc = 0x3186C0u;
    // 0x3186c0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3186c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x3186c4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3186c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3186c8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3186c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3186cc:
    // 0x3186cc: 0x283a80b  movn        $s5, $s4, $v1
    ctx->pc = 0x3186ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 20));
    // 0x3186d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3186d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3186d4:
    // 0x3186d4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3186d8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3186D8u;
    {
        const bool branch_taken_0x3186d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3186DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186D8u;
        // 0x3186dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186d8) {
            ctx->pc = 0x318640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318640;
        }
    }
    ctx->pc = 0x3186E0u;
    // 0x3186e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3186e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3186e4: 0xc0c6008  jal         func_318020
    ctx->pc = 0x3186E4u;
    SET_GPR_U32(ctx, 31, 0x3186ECu);
    ctx->pc = 0x3186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3186E4u;
    // 0x3186e8: 0x12282b  sltu        $a1, $zero, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x318020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318020u, 0x3186E4u, 0x3186ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186ECu;
label_3186ec:
    // 0x3186ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3186ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3186f0: 0xa05200d2  sb          $s2, 0xD2($v0)
    ctx->pc = 0x3186f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 210), (uint8_t)GPR_U32(ctx, 18));
    // 0x3186f4: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x3186f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3186F8u;
    {
        const bool branch_taken_0x3186f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186f8) {
            ctx->pc = 0x3186FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3186F8u;
            // 0x3186fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318700u;
    // 0x318700: 0x56a0000d  bnel        $s5, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x318700u;
    {
        const bool branch_taken_0x318700 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x318700) {
            ctx->pc = 0x318704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318700u;
            // 0x318704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318708u;
    // 0x318708: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x318708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x31870c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31870Cu;
    {
        const bool branch_taken_0x31870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31870Cu;
        // 0x318710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31870c) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318714u;
label_318714:
    // 0x318714: 0xc0c604c  jal         func_318130
    ctx->pc = 0x318714u;
    SET_GPR_U32(ctx, 31, 0x31871Cu);
    ctx->pc = 0x318718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318714u;
    // 0x318718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318130u, 0x318714u, 0x31871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31871Cu;
label_31871c:
    // 0x31871c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31871Cu;
    {
        const bool branch_taken_0x31871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31871Cu;
        // 0x318720: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31871c) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318724u;
label_318724:
    // 0x318724: 0xc0a354e  jal         func_28D538
    ctx->pc = 0x318724u;
    SET_GPR_U32(ctx, 31, 0x31872Cu);
    ctx->pc = 0x318728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318724u;
    // 0x318728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x318724u, 0x31872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31872Cu;
label_31872c:
    // 0x31872c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31872Cu;
    {
        const bool branch_taken_0x31872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31872Cu;
        // 0x318730: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31872c) {
            ctx->pc = 0x318738u;
            goto label_318738;
        }
    }
    ctx->pc = 0x318734u;
label_318734:
    // 0x318734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318738:
    // 0x318738: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x318738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31873c:
    // 0x31873c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31873cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x318740: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x318740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318744: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x318744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318748: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x318748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31874c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31874cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318750: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x318750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318754: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x318754u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318758: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x318758u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31875c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31875cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318760: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x318760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x318764: 0x3e00008  jr          $ra
    ctx->pc = 0x318764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318764u;
        // 0x318768: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31876Cu;
    // 0x31876c: 0x0  nop
    ctx->pc = 0x31876cu;
    // NOP
    ctx->pc = 0x318770u;
}
