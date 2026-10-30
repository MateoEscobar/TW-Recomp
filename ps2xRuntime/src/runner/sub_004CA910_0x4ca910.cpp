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

// Function: sub_004CA910
// Address: 0x4ca910 - 0x4caa98
void sub_004CA910_0x4ca910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA910_0x4ca910");
#endif

    switch (ctx->pc) {
        case 0x4ca958u: goto label_4ca958;
        default: break;
    }

    ctx->pc = 0x4ca910u;

    // 0x4ca910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ca910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ca914: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca91c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x4ca91cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ca920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ca924: 0x245028a0  addiu       $s0, $v0, 0x28A0
    ctx->pc = 0x4ca924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca928: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ca928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ca92c: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4ca92cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4ca930: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ca930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ca934: 0x262d2860  addiu       $t5, $s1, 0x2860
    ctx->pc = 0x4ca934u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 10336));
    // 0x4ca938: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ca938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ca93c: 0x26130c00  addiu       $s3, $s0, 0xC00
    ctx->pc = 0x4ca93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x4ca940: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ca940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ca944: 0x26140400  addiu       $s4, $s0, 0x400
    ctx->pc = 0x4ca944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x4ca948: 0x26150800  addiu       $s5, $s0, 0x800
    ctx->pc = 0x4ca948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x4ca94c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4ca94cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca950: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4ca950u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4ca954: 0x8db90010  lw          $t9, 0x10($t5)
    ctx->pc = 0x4ca954u;
    SET_GPR_S32(ctx, 25, (int32_t)FAST_READ32(0x532870u));
label_4ca958:
    // 0x4ca958: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x4ca958u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x4ca95c: 0x8db80014  lw          $t8, 0x14($t5)
    ctx->pc = 0x4ca95cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x4ca960: 0x31cb0001  andi        $t3, $t6, 0x1
    ctx->pc = 0x4ca960u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x4ca964: 0x93240000  lbu         $a0, 0x0($t9)
    ctx->pc = 0x4ca964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4ca968: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x4ca968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4ca96c: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x4ca96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4ca970: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ca970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4ca974: 0x952821  addu        $a1, $a0, $s5
    ctx->pc = 0x4ca974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x4ca978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ca978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ca97c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4ca97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca980: 0x744021  addu        $t0, $v1, $s4
    ctx->pc = 0x4ca980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4ca984: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x4ca984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca988: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4ca988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4ca98c: 0x8e492850  lw          $t1, 0x2850($s2)
    ctx->pc = 0x4ca98cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10320)));
    // 0x4ca990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ca990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ca994: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4ca994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca998: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4ca998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4ca99c: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x4ca99cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca9a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4ca9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4ca9a4: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x4ca9a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ca9a8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x4ca9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4ca9ac: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x4ca9acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ca9b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4ca9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4ca9b4: 0xada60008  sw          $a2, 0x8($t5)
    ctx->pc = 0x4ca9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 6));
    // 0x4ca9b8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4ca9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4ca9bc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4ca9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca9c0: 0x14c1821  addu        $v1, $t2, $t4
    ctx->pc = 0x4ca9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4ca9c4: 0xec2021  addu        $a0, $a3, $t4
    ctx->pc = 0x4ca9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4ca9c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ca9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca9cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4ca9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ca9d0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4ca9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4ca9d4: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x4ca9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4ca9d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ca9dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4ca9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca9e0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x4ca9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x4ca9e4: 0x8e242860  lw          $a0, 0x2860($s1)
    ctx->pc = 0x4ca9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10336)));
    // 0x4ca9e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ca9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ca9ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ca9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ca9f0: 0x8da90004  lw          $t1, 0x4($t5)
    ctx->pc = 0x4ca9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x4ca9f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ca9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ca9f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4ca9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4ca9fc: 0x25260004  addiu       $a2, $t1, 0x4
    ctx->pc = 0x4ca9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4caa00: 0x8da3000c  lw          $v1, 0xC($t5)
    ctx->pc = 0x4caa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x4caa04: 0x8e452850  lw          $a1, 0x2850($s2)
    ctx->pc = 0x4caa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10320)));
    // 0x4caa08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4caa08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4caa0c: 0xae242860  sw          $a0, 0x2860($s1)
    ctx->pc = 0x4caa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10336), GPR_U32(ctx, 4));
    // 0x4caa10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4caa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4caa14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4caa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4caa18: 0xada60004  sw          $a2, 0x4($t5)
    ctx->pc = 0x4caa18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 6));
    // 0x4caa1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4caa20: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x4caa20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4caa24: 0xada3000c  sw          $v1, 0xC($t5)
    ctx->pc = 0x4caa24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
    // 0x4caa28: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x4caa28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4caa2c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4caa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4caa30: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4caa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4caa34: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4caa34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4caa38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4caa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4caa3c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4caa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4caa40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4caa44: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4caa48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4caa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4caa4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4caa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4caa50: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CAA50u;
    {
        const bool branch_taken_0x4caa50 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAA50u;
        // 0x4caa54: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4caa50) {
            ctx->pc = 0x4CAA68u;
            goto label_4caa68;
        }
    }
    ctx->pc = 0x4CAA58u;
    // 0x4caa58: 0x27220001  addiu       $v0, $t9, 0x1
    ctx->pc = 0x4caa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x4caa5c: 0x27030001  addiu       $v1, $t8, 0x1
    ctx->pc = 0x4caa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x4caa60: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x4caa60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x4caa64: 0xada30014  sw          $v1, 0x14($t5)
    ctx->pc = 0x4caa64u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 3));
label_4caa68:
    // 0x4caa68: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x4caa68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x4caa6c: 0x55e0ffba  bnel        $t7, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x4CAA6Cu;
    {
        const bool branch_taken_0x4caa6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x4caa6c) {
            ctx->pc = 0x4CAA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CAA6Cu;
            // 0x4caa70: 0x8db90010  lw          $t9, 0x10($t5) (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca958;
        }
    }
    ctx->pc = 0x4CAA74u;
    // 0x4caa74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4caa74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4caa78: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4caa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caa7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4caa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4caa80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4caa80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4caa84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4caa84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4caa88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4caa88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4caa8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4caa8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4caa90: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAA90u;
        // 0x4caa94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CAA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CAA98u;
}
