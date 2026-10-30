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

// Function: sub_004CB108
// Address: 0x4cb108 - 0x4cb290
void sub_004CB108_0x4cb108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB108_0x4cb108");
#endif

    switch (ctx->pc) {
        case 0x4cb170u: goto label_4cb170;
        default: break;
    }

    ctx->pc = 0x4cb108u;

    // 0x4cb108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cb108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cb10c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x4cb10cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cb114: 0x24afffff  addiu       $t7, $a1, -0x1
    ctx->pc = 0x4cb114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4cb118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cb11c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cb11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cb120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cb120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cb124: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cb124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cb128: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cb128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cb12c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cb12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cb130: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cb130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cb134: 0x10a0004a  beqz        $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x4CB134u;
    {
        const bool branch_taken_0x4cb134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB134u;
        // 0x4cb138: 0xffbe0040  sd          $fp, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb134) {
            ctx->pc = 0x4CB260u;
            goto label_4cb260;
        }
    }
    ctx->pc = 0x4CB13Cu;
    // 0x4cb13c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb140: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cb140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4cb144: 0x245928a0  addiu       $t9, $v0, 0x28A0
    ctx->pc = 0x4cb144u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4cb148: 0x260c2860  addiu       $t4, $s0, 0x2860
    ctx->pc = 0x4cb148u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 10336));
    // 0x4cb14c: 0x273e0800  addiu       $fp, $t9, 0x800
    ctx->pc = 0x4cb14cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 25), 2048));
    // 0x4cb150: 0x27370400  addiu       $s7, $t9, 0x400
    ctx->pc = 0x4cb150u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 1024));
    // 0x4cb154: 0x27360c00  addiu       $s6, $t9, 0xC00
    ctx->pc = 0x4cb154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 25), 3072));
    // 0x4cb158: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4cb158u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4cb15c: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cb15cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cb160: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cb160u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cb164: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4cb164u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4cb168: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x4cb168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cb16c: 0x8d8e0010  lw          $t6, 0x10($t4)
    ctx->pc = 0x4cb16cu;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x532870u));
label_4cb170:
    // 0x4cb170: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x4cb170u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x4cb174: 0x8d890008  lw          $t1, 0x8($t4)
    ctx->pc = 0x4cb174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4cb178: 0x330b0001  andi        $t3, $t8, 0x1
    ctx->pc = 0x4cb178u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4cb17c: 0x8d8d0014  lw          $t5, 0x14($t4)
    ctx->pc = 0x4cb17cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x4cb180: 0x91c50000  lbu         $a1, 0x0($t6)
    ctx->pc = 0x4cb180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4cb184: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4cb184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cb188: 0x91a60000  lbu         $a2, 0x0($t5)
    ctx->pc = 0x4cb188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cb18c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4cb18cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cb190: 0x8ea42840  lw          $a0, 0x2840($s5)
    ctx->pc = 0x4cb190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10304)));
    // 0x4cb194: 0xbe3821  addu        $a3, $a1, $fp
    ctx->pc = 0x4cb194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x4cb198: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4cb198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4cb19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb1a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cb1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb1a4: 0xd74021  addu        $t0, $a2, $s7
    ctx->pc = 0x4cb1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x4cb1a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cb1ac: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4cb1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cb1b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4cb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb1b4: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x4cb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x4cb1b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cb1bc: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x4cb1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x4cb1c0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4cb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cb1c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4cb1c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4cb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4cb1cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4cb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4cb1d0: 0x8e882844  lw          $t0, 0x2844($s4)
    ctx->pc = 0x4cb1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10308)));
    // 0x4cb1d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4cb1d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4cb1d8: 0xad890008  sw          $t1, 0x8($t4)
    ctx->pc = 0x4cb1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 9));
    // 0x4cb1dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4cb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4cb1e0: 0x8e46284c  lw          $a2, 0x284C($s2)
    ctx->pc = 0x4cb1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10316)));
    // 0x4cb1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb1e8: 0x8e6a2848  lw          $t2, 0x2848($s3)
    ctx->pc = 0x4cb1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10312)));
    // 0x4cb1ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4cb1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4cb1f0: 0x8d870018  lw          $a3, 0x18($t4)
    ctx->pc = 0x4cb1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x4cb1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb1f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cb1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cb1fc: 0x94450400  lhu         $a1, 0x400($v0)
    ctx->pc = 0x4cb1fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x4cb200: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4cb204: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4cb204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4cb208: 0x94660400  lhu         $a2, 0x400($v1)
    ctx->pc = 0x4cb208u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x4cb20c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4cb20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb210: 0x94830400  lhu         $v1, 0x400($a0)
    ctx->pc = 0x4cb210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x4cb214: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4cb214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4cb218: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4cb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4cb21c: 0x8e042860  lw          $a0, 0x2860($s0)
    ctx->pc = 0x4cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10336)));
    // 0x4cb220: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4cb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4cb224: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4cb224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4cb228: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cb228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cb22c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4cb22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4cb230: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4cb230u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb234: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x4cb234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4cb238: 0xad870018  sw          $a3, 0x18($t4)
    ctx->pc = 0x4cb238u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 7));
    // 0x4cb23c: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CB23Cu;
    {
        const bool branch_taken_0x4cb23c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB23Cu;
        // 0x4cb240: 0xae052860  sw          $a1, 0x2860($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10336), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb23c) {
            ctx->pc = 0x4CB254u;
            goto label_4cb254;
        }
    }
    ctx->pc = 0x4CB244u;
    // 0x4cb244: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x4cb244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x4cb248: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x4cb248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4cb24c: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x4cb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x4cb250: 0xad830014  sw          $v1, 0x14($t4)
    ctx->pc = 0x4cb250u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 3));
label_4cb254:
    // 0x4cb254: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x4cb254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x4cb258: 0x55f1ffc5  bnel        $t7, $s1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x4CB258u;
    {
        const bool branch_taken_0x4cb258 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x4cb258) {
            ctx->pc = 0x4CB25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB258u;
            // 0x4cb25c: 0x8d8e0010  lw          $t6, 0x10($t4) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CB170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb170;
        }
    }
    ctx->pc = 0x4CB260u;
label_4cb260:
    // 0x4cb260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb268: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb26c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb26cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb270: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cb270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb274: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cb274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cb278: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cb278u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb27c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cb27cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cb280: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cb280u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb284: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB284u;
        // 0x4cb288: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB28Cu;
    // 0x4cb28c: 0x0  nop
    ctx->pc = 0x4cb28cu;
    // NOP
    ctx->pc = 0x4cb290u;
}
