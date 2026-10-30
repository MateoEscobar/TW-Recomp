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

// Function: sub_004CABE0
// Address: 0x4cabe0 - 0x4cadb8
void sub_004CABE0_0x4cabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CABE0_0x4cabe0");
#endif

    switch (ctx->pc) {
        case 0x4cac38u: goto label_4cac38;
        default: break;
    }

    ctx->pc = 0x4cabe0u;

    // 0x4cabe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cabe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cabe4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cabe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cabec: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x4cabecu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cabf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cabf4: 0x245328a0  addiu       $s3, $v0, 0x28A0
    ctx->pc = 0x4cabf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4cabf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cabfc: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cabfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cac00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cac04: 0x26982860  addiu       $t8, $s4, 0x2860
    ctx->pc = 0x4cac04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 10336));
    // 0x4cac08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cac0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cac0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cac10: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cac14: 0x26760c00  addiu       $s6, $s3, 0xC00
    ctx->pc = 0x4cac14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 3072));
    // 0x4cac18: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cac1c: 0x26770400  addiu       $s7, $s3, 0x400
    ctx->pc = 0x4cac1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x4cac20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cac24: 0x267e0800  addiu       $fp, $s3, 0x800
    ctx->pc = 0x4cac24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    // 0x4cac28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cac2c: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4cac2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4cac30: 0x8f110014  lw          $s1, 0x14($t8)
    ctx->pc = 0x4cac30u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x532874u));
    // 0x4cac34: 0x0  nop
    ctx->pc = 0x4cac34u;
    // NOP
label_4cac38:
    // 0x4cac38: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x4cac38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x4cac3c: 0x8f070008  lw          $a3, 0x8($t8)
    ctx->pc = 0x4cac3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cac40: 0x332e0001  andi        $t6, $t9, 0x1
    ctx->pc = 0x4cac40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x4cac44: 0x8f120010  lw          $s2, 0x10($t8)
    ctx->pc = 0x4cac44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cac48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4cac48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cac4c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4cac4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cac50: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x4cac50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cac54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cac58: 0x8ea52850  lw          $a1, 0x2850($s5)
    ctx->pc = 0x4cac58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10320)));
    // 0x4cac5c: 0x564821  addu        $t1, $v0, $s6
    ctx->pc = 0x4cac5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x4cac60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cac64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cac68: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x4cac68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cac6c: 0x9e3021  addu        $a2, $a0, $fp
    ctx->pc = 0x4cac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x4cac70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4cac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4cac74: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x4cac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x4cac78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4cac78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cac7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4cac7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4cac80: 0x8c6f0000  lw          $t7, 0x0($v1)
    ctx->pc = 0x4cac80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cac84: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4cac84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4cac88: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4cac88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cac8c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4cac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x4cac90: 0xaf070008  sw          $a3, 0x8($t8)
    ctx->pc = 0x4cac90u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 7));
    // 0x4cac94: 0x14f1021  addu        $v0, $t2, $t7
    ctx->pc = 0x4cac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x4cac98: 0x8f070018  lw          $a3, 0x18($t8)
    ctx->pc = 0x4cac98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cac9c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4cac9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4caca0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x4caca0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4caca4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4caca4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4caca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4caca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cacac: 0x10f2821  addu        $a1, $t0, $t7
    ctx->pc = 0x4cacacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x4cacb0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4cacb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cacb4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4cacb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4cacb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4cacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cacbc: 0x12f3021  addu        $a2, $t1, $t7
    ctx->pc = 0x4cacbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x4cacc0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cacc4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4cacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4cacc8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4cacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4caccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4cacccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4cacd0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4cacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4cacd4: 0x8e8b2860  lw          $t3, 0x2860($s4)
    ctx->pc = 0x4cacd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10336)));
    // 0x4cacd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4cacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4cacdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4cacdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4cace0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cace4: 0x8f0c0004  lw          $t4, 0x4($t8)
    ctx->pc = 0x4cace4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4cace8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4cace8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4cacec: 0xaf070018  sw          $a3, 0x18($t8)
    ctx->pc = 0x4cacecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 7));
    // 0x4cacf0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4cacf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4cacf4: 0x8f03000c  lw          $v1, 0xC($t8)
    ctx->pc = 0x4cacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x4cacf8: 0x258d0004  addiu       $t5, $t4, 0x4
    ctx->pc = 0x4cacf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4cacfc: 0x8ea42850  lw          $a0, 0x2850($s5)
    ctx->pc = 0x4cacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10320)));
    // 0x4cad00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4cad00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cad04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4cad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4cad08: 0x8f06001c  lw          $a2, 0x1C($t8)
    ctx->pc = 0x4cad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x4cad0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cad10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cad14: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x4cad14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cad18: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x4cad18u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x4cad1c: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x4cad1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x4cad20: 0x10f4021  addu        $t0, $t0, $t7
    ctx->pc = 0x4cad20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x4cad24: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4cad24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cad28: 0x12f4821  addu        $t1, $t1, $t7
    ctx->pc = 0x4cad28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x4cad2c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4cad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cad30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4cad30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4cad34: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4cad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cad38: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4cad3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4cad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4cad40: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4cad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cad44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4cad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4cad48: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4cad48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4cad4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4cad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4cad50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cad54: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4cad54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4cad58: 0xaf06001c  sw          $a2, 0x1C($t8)
    ctx->pc = 0x4cad58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 6));
    // 0x4cad5c: 0xae8b2860  sw          $t3, 0x2860($s4)
    ctx->pc = 0x4cad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10336), GPR_U32(ctx, 11));
    // 0x4cad60: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CAD60u;
    {
        const bool branch_taken_0x4cad60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAD60u;
        // 0x4cad64: 0xaf0d0004  sw          $t5, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cad60) {
            ctx->pc = 0x4CAD78u;
            goto label_4cad78;
        }
    }
    ctx->pc = 0x4CAD68u;
    // 0x4cad68: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4cad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4cad6c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4cad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4cad70: 0xaf020010  sw          $v0, 0x10($t8)
    ctx->pc = 0x4cad70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 2));
    // 0x4cad74: 0xaf030014  sw          $v1, 0x14($t8)
    ctx->pc = 0x4cad74u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 3));
label_4cad78:
    // 0x4cad78: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4cad78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4cad7c: 0x5600ffae  bnel        $s0, $zero, . + 4 + (-0x52 << 2)
    ctx->pc = 0x4CAD7Cu;
    {
        const bool branch_taken_0x4cad7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cad7c) {
            ctx->pc = 0x4CAD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CAD7Cu;
            // 0x4cad80: 0x8f110014  lw          $s1, 0x14($t8) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CAC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cac38;
        }
    }
    ctx->pc = 0x4CAD84u;
    // 0x4cad84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cad84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cad88: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x4cad88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cad8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cad8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cad90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cad90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cad94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cad94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cad98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cad98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cad9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cad9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cada0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cada0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cada4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cada4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cada8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cada8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cadac: 0x3e00008  jr          $ra
    ctx->pc = 0x4CADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CADACu;
        // 0x4cadb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CADB4u;
    // 0x4cadb4: 0x0  nop
    ctx->pc = 0x4cadb4u;
    // NOP
    ctx->pc = 0x4cadb8u;
}
