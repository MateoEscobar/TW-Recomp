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

// Function: sub_004B8000
// Address: 0x4b8000 - 0x4b8198
void sub_004B8000_0x4b8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8000_0x4b8000");
#endif

    switch (ctx->pc) {
        case 0x4b80ecu: goto label_4b80ec;
        case 0x4b8134u: goto label_4b8134;
        case 0x4b813cu: goto label_4b813c;
        default: break;
    }

    ctx->pc = 0x4b8000u;

    // 0x4b8000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b8004: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4b8004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8008: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4b8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4b800c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4b800cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8010: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b8010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b8014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b8014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8018: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4b8018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4b801c: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B801Cu;
    {
        const bool branch_taken_0x4b801c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B801Cu;
        // 0x4b8020: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b801c) {
            ctx->pc = 0x4B806Cu;
            goto label_4b806c;
        }
    }
    ctx->pc = 0x4B8024u;
    // 0x4b8024: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x4b8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x4b8028: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b8028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b802c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b8030: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4b8030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4b8034: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4b8034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b8038: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x4b8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x4b803c: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4b803cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8040: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4b8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b8044: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4b8044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b8048: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4b8048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b804c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4b804cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x4b8050: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x4b8050u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8054: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x4b8054u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x4b8058: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4b8058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4b805c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4b805cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4b8060: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x4b8060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x4b8064: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4b8064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4b8068: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4b8068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4b806c:
    // 0x4b806c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4b806cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8070: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4b8070u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x4b8074: 0x264204a0  addiu       $v0, $s2, 0x4A0
    ctx->pc = 0x4b8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1184));
    // 0x4b8078: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x4b8078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x4b807c: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x4b807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4b8080: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x4b8080u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5904A8u));
    // 0x4b8084: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x4b8084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4b8088: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x4b8088u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4b808c: 0xde4604a0  ld          $a2, 0x4A0($s2)
    ctx->pc = 0x4b808cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 1184)));
    // 0x4b8090: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b8094: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4b8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x4b8098: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x4b8098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x4b809c: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x4b809cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b80a0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b80a4: 0x24440de8  addiu       $a0, $v0, 0xDE8
    ctx->pc = 0x4b80a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
    // 0x4b80a8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B80A8u;
    {
        const bool branch_taken_0x4b80a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B80A8u;
        // 0x4b80ac: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b80a8) {
            ctx->pc = 0x4B80DCu;
            goto label_4b80dc;
        }
    }
    ctx->pc = 0x4B80B0u;
    // 0x4b80b0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4b80b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b80b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4b80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4b80b8: 0xdc460de8  ld          $a2, 0xDE8($v0)
    ctx->pc = 0x4b80b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 3560)));
    // 0x4b80bc: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4b80bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b80c0: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x4b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x4b80c4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4b80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b80c8: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4b80c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4b80cc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4b80ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4b80d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b80d4: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4b80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4b80d8: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4b80d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4b80dc:
    // 0x4b80dc: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x4b80dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b80e0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4b80e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80e4: 0xc12df08  jal         func_4B7C20
    ctx->pc = 0x4B80E4u;
    SET_GPR_U32(ctx, 31, 0x4B80ECu);
    ctx->pc = 0x4B80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B80E4u;
    // 0x4b80e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7C20u, 0x4B80E4u, 0x4B80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B80ECu;
label_4b80ec:
    // 0x4b80ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B80ECu;
    {
        const bool branch_taken_0x4b80ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B80ECu;
        // 0x4b80f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b80ec) {
            ctx->pc = 0x4B8100u;
            goto label_4b8100;
        }
    }
    ctx->pc = 0x4B80F4u;
    // 0x4b80f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b80f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B80F8u;
    {
        const bool branch_taken_0x4b80f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B80F8u;
        // 0x4b80fc: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b80f8) {
            ctx->pc = 0x4B8104u;
            goto label_4b8104;
        }
    }
    ctx->pc = 0x4B8100u;
label_4b8100:
    // 0x4b8100: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x4b8100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_4b8104:
    // 0x4b8104: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b8104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b8108: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4b8108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b810c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4b810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b8110: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x4b8110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x4b8114: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x4b8114u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8118: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x4b8118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x4b811c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x4b811cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x4b8120: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x4b8120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x4b8124: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x4b8124u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8128: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x4b8128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x4b812c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B812Cu;
    {
        const bool branch_taken_0x4b812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B812Cu;
        // 0x4b8130: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b812c) {
            ctx->pc = 0x4B813Cu;
            goto label_4b813c;
        }
    }
    ctx->pc = 0x4B8134u;
label_4b8134:
    // 0x4b8134: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B8134u;
    SET_GPR_U32(ctx, 31, 0x4B813Cu);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B8134u, 0x4B813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B813Cu;
label_4b813c:
    // 0x4b813c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B813Cu;
    {
        const bool branch_taken_0x4b813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B813Cu;
        // 0x4b8140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b813c) {
            ctx->pc = 0x4B817Cu;
            goto label_4b817c;
        }
    }
    ctx->pc = 0x4B8144u;
    // 0x4b8144: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b8144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8148: 0x264304a0  addiu       $v1, $s2, 0x4A0
    ctx->pc = 0x4b8148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1184));
    // 0x4b814c: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x4b814cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b8150: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x4b8150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x4b8154: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4b8158: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4b8158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4b815c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x4b815cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b8160: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b8160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b8164: 0xde4704a0  ld          $a3, 0x4A0($s2)
    ctx->pc = 0x4b8164u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 1184)));
    // 0x4b8168: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4b8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4b816c: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4b816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4b8170: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x4b8170u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b8174: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x4B8174u;
    {
        const bool branch_taken_0x4b8174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8174u;
        // 0x4b8178: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8174) {
            ctx->pc = 0x4B8134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b8134;
        }
    }
    ctx->pc = 0x4B817Cu;
label_4b817c:
    // 0x4b817c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b8180: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4b8180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b8184: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4b8184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8188: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b8188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b818c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B818Cu;
        // 0x4b8190: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8194u;
    // 0x4b8194: 0x0  nop
    ctx->pc = 0x4b8194u;
    // NOP
    ctx->pc = 0x4b8198u;
}
