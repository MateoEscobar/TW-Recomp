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

// Function: sub_004CAF20
// Address: 0x4caf20 - 0x4cb108
void sub_004CAF20_0x4caf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAF20_0x4caf20");
#endif

    switch (ctx->pc) {
        case 0x4caf78u: goto label_4caf78;
        default: break;
    }

    ctx->pc = 0x4caf20u;

    // 0x4caf20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4caf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4caf24: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4caf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4caf28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4caf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4caf2c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x4caf2cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4caf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4caf34: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4caf34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4caf38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4caf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4caf3c: 0x26982860  addiu       $t8, $s4, 0x2860
    ctx->pc = 0x4caf3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 10336));
    // 0x4caf40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4caf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4caf44: 0x245328a0  addiu       $s3, $v0, 0x28A0
    ctx->pc = 0x4caf44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4caf48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4caf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4caf4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4caf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caf50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4caf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4caf54: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4caf54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
    // 0x4caf58: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4caf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4caf5c: 0x3c170053  lui         $s7, 0x53
    ctx->pc = 0x4caf5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)83 << 16));
    // 0x4caf60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4caf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4caf64: 0x3c1e0053  lui         $fp, 0x53
    ctx->pc = 0x4caf64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)83 << 16));
    // 0x4caf68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4caf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4caf6c: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4caf6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4caf70: 0x8f120010  lw          $s2, 0x10($t8)
    ctx->pc = 0x4caf70u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x532870u));
    // 0x4caf74: 0x0  nop
    ctx->pc = 0x4caf74u;
    // NOP
label_4caf78:
    // 0x4caf78: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4caf78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4caf7c: 0x8f110014  lw          $s1, 0x14($t8)
    ctx->pc = 0x4caf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x4caf80: 0x24e730a0  addiu       $a3, $a3, 0x30A0
    ctx->pc = 0x4caf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12448));
    // 0x4caf84: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x4caf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4caf88: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4caf88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4caf8c: 0x8f0b0008  lw          $t3, 0x8($t8)
    ctx->pc = 0x4caf8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4caf90: 0x25082ca0  addiu       $t0, $t0, 0x2CA0
    ctx->pc = 0x4caf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11424));
    // 0x4caf94: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x4caf94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4caf98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4caf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4caf9c: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x4caf9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cafa0: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x4cafa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4cafa4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cafa8: 0x8fc52840  lw          $a1, 0x2840($fp)
    ctx->pc = 0x4cafa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10304)));
    // 0x4cafac: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x4cafacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4cafb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cafb4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4cafb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cafb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cafbc: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4cafbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4cafc0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4cafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cafc4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4cafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4cafc8: 0x24c634a0  addiu       $a2, $a2, 0x34A0
    ctx->pc = 0x4cafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13472));
    // 0x4cafcc: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x4cafccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cafd0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4cafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4cafd4: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x4cafd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cafd8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4cafd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4cafdc: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x4cafdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cafe0: 0x1e83021  addu        $a2, $t7, $t0
    ctx->pc = 0x4cafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x4cafe4: 0x8ee42844  lw          $a0, 0x2844($s7)
    ctx->pc = 0x4cafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10308)));
    // 0x4cafe8: 0x1e91021  addu        $v0, $t7, $t1
    ctx->pc = 0x4cafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x4cafec: 0x8ec32848  lw          $v1, 0x2848($s6)
    ctx->pc = 0x4cafecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10312)));
    // 0x4caff0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4caff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4caff4: 0xaf0b0008  sw          $t3, 0x8($t8)
    ctx->pc = 0x4caff4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 11));
    // 0x4caff8: 0x1ea2821  addu        $a1, $t7, $t2
    ctx->pc = 0x4caff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x4caffc: 0x8ea7284c  lw          $a3, 0x284C($s5)
    ctx->pc = 0x4caffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10316)));
    // 0x4cb000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb004: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4cb004u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4cb008: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cb008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cb00c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4cb00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4cb010: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4cb010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cb014: 0x94c40400  lhu         $a0, 0x400($a2)
    ctx->pc = 0x4cb014u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1024)));
    // 0x4cb018: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4cb018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4cb01c: 0x94430400  lhu         $v1, 0x400($v0)
    ctx->pc = 0x4cb01cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x4cb020: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x4cb020u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x4cb024: 0x94a20400  lhu         $v0, 0x400($a1)
    ctx->pc = 0x4cb024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x4cb028: 0x332e0001  andi        $t6, $t9, 0x1
    ctx->pc = 0x4cb028u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x4cb02c: 0x8e852860  lw          $a1, 0x2860($s4)
    ctx->pc = 0x4cb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10336)));
    // 0x4cb030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cb030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cb034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4cb034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4cb038: 0x8f0c0004  lw          $t4, 0x4($t8)
    ctx->pc = 0x4cb038u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4cb03c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4cb03cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb040: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4cb040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4cb044: 0x258d0002  addiu       $t5, $t4, 0x2
    ctx->pc = 0x4cb044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x4cb048: 0x8f03000c  lw          $v1, 0xC($t8)
    ctx->pc = 0x4cb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x4cb04c: 0x8fc42840  lw          $a0, 0x2840($fp)
    ctx->pc = 0x4cb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10304)));
    // 0x4cb050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4cb050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cb054: 0x8eeb2844  lw          $t3, 0x2844($s7)
    ctx->pc = 0x4cb054u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10308)));
    // 0x4cb058: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4cb05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cb060: 0x8ec62848  lw          $a2, 0x2848($s6)
    ctx->pc = 0x4cb060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10312)));
    // 0x4cb064: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cb064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cb068: 0x8ea7284c  lw          $a3, 0x284C($s5)
    ctx->pc = 0x4cb068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10316)));
    // 0x4cb06c: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x4cb06cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb070: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x4cb070u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x4cb074: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x4cb074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x4cb078: 0x1e84021  addu        $t0, $t7, $t0
    ctx->pc = 0x4cb078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x4cb07c: 0x1ea5021  addu        $t2, $t7, $t2
    ctx->pc = 0x4cb07cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x4cb080: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4cb080u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4cb084: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4cb084u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4cb088: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x4cb088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x4cb08c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x4cb08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4cb090: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4cb090u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4cb094: 0x95230400  lhu         $v1, 0x400($t1)
    ctx->pc = 0x4cb094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1024)));
    // 0x4cb098: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x4cb098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4cb09c: 0x95040400  lhu         $a0, 0x400($t0)
    ctx->pc = 0x4cb09cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1024)));
    // 0x4cb0a0: 0x95420400  lhu         $v0, 0x400($t2)
    ctx->pc = 0x4cb0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x4cb0a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4cb0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4cb0a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4cb0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4cb0ac: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4cb0acu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb0b0: 0xae852860  sw          $a1, 0x2860($s4)
    ctx->pc = 0x4cb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10336), GPR_U32(ctx, 5));
    // 0x4cb0b4: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CB0B4u;
    {
        const bool branch_taken_0x4cb0b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB0B4u;
        // 0x4cb0b8: 0xaf0d0004  sw          $t5, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb0b4) {
            ctx->pc = 0x4CB0CCu;
            goto label_4cb0cc;
        }
    }
    ctx->pc = 0x4CB0BCu;
    // 0x4cb0bc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4cb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4cb0c0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4cb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4cb0c4: 0xaf020010  sw          $v0, 0x10($t8)
    ctx->pc = 0x4cb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 2));
    // 0x4cb0c8: 0xaf030014  sw          $v1, 0x14($t8)
    ctx->pc = 0x4cb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 3));
label_4cb0cc:
    // 0x4cb0cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4cb0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4cb0d0: 0x5600ffa9  bnel        $s0, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x4CB0D0u;
    {
        const bool branch_taken_0x4cb0d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb0d0) {
            ctx->pc = 0x4CB0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CB0D0u;
            // 0x4cb0d4: 0x8f120010  lw          $s2, 0x10($t8) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CAF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4caf78;
        }
    }
    ctx->pc = 0x4CB0D8u;
    // 0x4cb0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb0dc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x4cb0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb0e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cb0e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb0e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb0e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cb0ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cb0ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb0f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cb0f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cb0f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cb0f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb0f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cb0f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cb0fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cb0fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb100: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB100u;
        // 0x4cb104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB108u;
}
