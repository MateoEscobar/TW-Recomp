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

// Function: sub_004B8318
// Address: 0x4b8318 - 0x4b84b0
void sub_004B8318_0x4b8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8318_0x4b8318");
#endif

    switch (ctx->pc) {
        case 0x4b8408u: goto label_4b8408;
        case 0x4b8450u: goto label_4b8450;
        case 0x4b8458u: goto label_4b8458;
        default: break;
    }

    ctx->pc = 0x4b8318u;

    // 0x4b8318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b831c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4b831cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8320: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4b8320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4b8324: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4b8324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8328: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b8328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b832c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b832cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8330: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4b8330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4b8334: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B8334u;
    {
        const bool branch_taken_0x4b8334 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8334u;
        // 0x4b8338: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8334) {
            ctx->pc = 0x4B8384u;
            goto label_4b8384;
        }
    }
    ctx->pc = 0x4B833Cu;
    // 0x4b833c: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x4b833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x4b8340: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b8340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8344: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b8344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b8348: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4b8348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4b834c: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4b834cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b8350: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x4b8350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x4b8354: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4b8354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8358: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4b8358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b835c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4b835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b8360: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4b8360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b8364: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4b8364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x4b8368: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x4b8368u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b836c: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x4b836cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x4b8370: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4b8370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4b8374: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4b8374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4b8378: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x4b8378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x4b837c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4b837cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4b8380: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4b8380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4b8384:
    // 0x4b8384: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4b8384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8388: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4b8388u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x4b838c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x4b838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x4b8390: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x4b8390u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x4b8394: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x4b8394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4b8398: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x4b8398u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x590498u));
    // 0x4b839c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x4b839cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4b83a0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x4b83a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4b83a4: 0xde460490  ld          $a2, 0x490($s2)
    ctx->pc = 0x4b83a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x4b83a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b83ac: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4b83acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x4b83b0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x4b83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x4b83b4: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x4b83b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b83b8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4b83b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4b83bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b83c0: 0x24440df8  addiu       $a0, $v0, 0xDF8
    ctx->pc = 0x4b83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3576));
    // 0x4b83c4: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B83C4u;
    {
        const bool branch_taken_0x4b83c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B83C4u;
        // 0x4b83c8: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b83c4) {
            ctx->pc = 0x4B83F8u;
            goto label_4b83f8;
        }
    }
    ctx->pc = 0x4B83CCu;
    // 0x4b83cc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4b83ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b83d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4b83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4b83d4: 0xdc460df8  ld          $a2, 0xDF8($v0)
    ctx->pc = 0x4b83d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 3576)));
    // 0x4b83d8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4b83d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b83dc: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x4b83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x4b83e0: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4b83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b83e4: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4b83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4b83e8: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4b83e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4b83ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b83f0: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4b83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4b83f4: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4b83f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4b83f8:
    // 0x4b83f8: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x4b83f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b83fc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4b83fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8400: 0xc12df08  jal         func_4B7C20
    ctx->pc = 0x4B8400u;
    SET_GPR_U32(ctx, 31, 0x4B8408u);
    ctx->pc = 0x4B8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8400u;
    // 0x4b8404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7C20u, 0x4B8400u, 0x4B8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8408u;
label_4b8408:
    // 0x4b8408: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8408u;
    {
        const bool branch_taken_0x4b8408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8408u;
        // 0x4b840c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8408) {
            ctx->pc = 0x4B841Cu;
            goto label_4b841c;
        }
    }
    ctx->pc = 0x4B8410u;
    // 0x4b8410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b8410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B8414u;
    {
        const bool branch_taken_0x4b8414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8414u;
        // 0x4b8418: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8414) {
            ctx->pc = 0x4B8420u;
            goto label_4b8420;
        }
    }
    ctx->pc = 0x4B841Cu;
label_4b841c:
    // 0x4b841c: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x4b841cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_4b8420:
    // 0x4b8420: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b8424: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4b8424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b8428: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4b8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b842c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x4b842cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x4b8430: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x4b8430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8434: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x4b8434u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x4b8438: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x4b8438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x4b843c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x4b843cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x4b8440: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x4b8440u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8444: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x4b8444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x4b8448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8448u;
    {
        const bool branch_taken_0x4b8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8448u;
        // 0x4b844c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8448) {
            ctx->pc = 0x4B8458u;
            goto label_4b8458;
        }
    }
    ctx->pc = 0x4B8450u;
label_4b8450:
    // 0x4b8450: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B8450u;
    SET_GPR_U32(ctx, 31, 0x4B8458u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B8450u, 0x4B8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8458u;
label_4b8458:
    // 0x4b8458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B8458u;
    {
        const bool branch_taken_0x4b8458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8458u;
        // 0x4b845c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8458) {
            ctx->pc = 0x4B8498u;
            goto label_4b8498;
        }
    }
    ctx->pc = 0x4B8460u;
    // 0x4b8460: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b8460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8464: 0x26430490  addiu       $v1, $s2, 0x490
    ctx->pc = 0x4b8464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x4b8468: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x4b8468u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b846c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x4b846cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x4b8470: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4b8470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4b8474: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4b8474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b8478: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x4b8478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b847c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b8480: 0xde470490  ld          $a3, 0x490($s2)
    ctx->pc = 0x4b8480u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x4b8484: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4b8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4b8488: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4b8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4b848c: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x4b848cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b8490: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x4B8490u;
    {
        const bool branch_taken_0x4b8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8490u;
        // 0x4b8494: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8490) {
            ctx->pc = 0x4B8450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b8450;
        }
    }
    ctx->pc = 0x4B8498u;
label_4b8498:
    // 0x4b8498: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b8498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b849c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4b849cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b84a0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4b84a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b84a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b84a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b84a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B84A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B84A8u;
        // 0x4b84ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B84A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B84B0u;
}
