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

// Function: sub_00493908
// Address: 0x493908 - 0x493b50
void sub_00493908_0x493908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493908_0x493908");
#endif

    switch (ctx->pc) {
        case 0x493938u: goto label_493938;
        case 0x493970u: goto label_493970;
        case 0x4939a8u: goto label_4939a8;
        case 0x4939b8u: goto label_4939b8;
        case 0x493ac0u: goto label_493ac0;
        case 0x493ae0u: goto label_493ae0;
        default: break;
    }

    ctx->pc = 0x493908u;

    // 0x493908: 0x27bdef80  addiu       $sp, $sp, -0x1080
    ctx->pc = 0x493908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963072));
    // 0x49390c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x49390cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493910: 0x7fb01070  sq          $s0, 0x1070($sp)
    ctx->pc = 0x493910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 16));
    // 0x493914: 0x7fb11060  sq          $s1, 0x1060($sp)
    ctx->pc = 0x493914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 17));
    // 0x493918: 0x7fb21050  sq          $s2, 0x1050($sp)
    ctx->pc = 0x493918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 18));
    // 0x49391c: 0x7fb31040  sq          $s3, 0x1040($sp)
    ctx->pc = 0x49391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 19));
    // 0x493920: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x493920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x493924: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x493924u;
    {
        const bool branch_taken_0x493924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493924u;
        // 0x493928: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493924) {
            ctx->pc = 0x493B34u;
            goto label_493b34;
        }
    }
    ctx->pc = 0x49392Cu;
    // 0x49392c: 0x27b21000  addiu       $s2, $sp, 0x1000
    ctx->pc = 0x49392cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x493930: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x493930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x493934: 0x0  nop
    ctx->pc = 0x493934u;
    // NOP
label_493938:
    // 0x493938: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x493938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49393c: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x49393Cu;
    {
        const bool branch_taken_0x49393c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49393Cu;
        // 0x493940: 0x25b30004  addiu       $s3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49393c) {
            ctx->pc = 0x493AB8u;
            goto label_493ab8;
        }
    }
    ctx->pc = 0x493944u;
    // 0x493944: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x493944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x493948: 0x25a50002  addiu       $a1, $t5, 0x2
    ctx->pc = 0x493948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x49394c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49394cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493950: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x493950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x493954: 0x1a41018  mult        $v0, $t5, $a0
    ctx->pc = 0x493954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x493958: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x493958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49395c: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x49395cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x493960: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x493960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x493964: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x493964u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493968: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x493968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x49396c: 0x0  nop
    ctx->pc = 0x49396cu;
    // NOP
label_493970:
    // 0x493970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x493970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493974: 0x992821  addu        $a1, $a0, $t9
    ctx->pc = 0x493974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x493978: 0x25180010  addiu       $t8, $t0, 0x10
    ctx->pc = 0x493978u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x49397c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x49397cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493980: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x493980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x493984: 0x7fa31000  sq          $v1, 0x1000($sp)
    ctx->pc = 0x493984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4096), GPR_VEC(ctx, 3));
    // 0x493988: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x493988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x49398c: 0x7fa21010  sq          $v0, 0x1010($sp)
    ctx->pc = 0x49398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 2));
    // 0x493990: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x493990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x493994: 0x7fa31020  sq          $v1, 0x1020($sp)
    ctx->pc = 0x493994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 3));
    // 0x493998: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x493998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x49399c: 0x7fa21030  sq          $v0, 0x1030($sp)
    ctx->pc = 0x49399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 2));
    // 0x4939a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4939a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4939a4: 0x0  nop
    ctx->pc = 0x4939a4u;
    // NOP
label_4939a8:
    // 0x4939a8: 0x254e0010  addiu       $t6, $t2, 0x10
    ctx->pc = 0x4939a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x4939ac: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4939acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4939b0: 0xa4827  nor         $t1, $zero, $t2
    ctx->pc = 0x4939b0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x4939b4: 0x0  nop
    ctx->pc = 0x4939b4u;
    // NOP
label_4939b8:
    // 0x4939b8: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x4939B8u;
    {
        const bool branch_taken_0x4939b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4939BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4939B8u;
        // 0x4939bc: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4939b8) {
            ctx->pc = 0x493A14u;
            goto label_493a14;
        }
    }
    ctx->pc = 0x4939C0u;
    // 0x4939c0: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x4939c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x4939c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4939c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4939c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4939c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4939cc: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x4939ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x4939d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4939d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4939d4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4939d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4939d8: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x4939d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x4939dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4939dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4939e0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4939e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4939e4: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x4939e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x4939e8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4939e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4939ec: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x4939ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x4939f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4939f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4939f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4939f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4939f8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4939f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4939fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4939fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x493a00: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x493a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x493a04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x493a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x493a08: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x493a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x493a0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x493A0Cu;
    {
        const bool branch_taken_0x493a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493A0Cu;
        // 0x493a10: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493a0c) {
            ctx->pc = 0x493A60u;
            goto label_493a60;
        }
    }
    ctx->pc = 0x493A14u;
label_493a14:
    // 0x493a14: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x493a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x493a18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493a1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x493a20: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x493a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x493a24: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x493a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x493a28: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493a28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493a2c: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x493a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x493a30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493a34: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x493a34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x493a38: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x493a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x493a3c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x493a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x493a40: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x493a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x493a44: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x493a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x493a48: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x493a48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x493a4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x493a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x493a50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x493a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x493a54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x493a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x493a58: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x493a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x493a5c: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x493a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_493a60:
    // 0x493a60: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x493a60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x493a64: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x493a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x493a68: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x493a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x493a6c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x493a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x493a70: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x493a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x493a74: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x493a74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x493a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x493a7c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x493a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x493a80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x493a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x493a84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x493a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x493a88: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x493a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x493a8c: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x493a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x493a90: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x493A90u;
    {
        const bool branch_taken_0x493a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493A90u;
        // 0x493a94: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493a90) {
            ctx->pc = 0x4939B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4939b8;
        }
    }
    ctx->pc = 0x493A98u;
    // 0x493a98: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x493a98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493a9c: 0x29420040  slti        $v0, $t2, 0x40
    ctx->pc = 0x493a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x493aa0: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x493AA0u;
    {
        const bool branch_taken_0x493aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493aa0) {
            ctx->pc = 0x493AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493AA0u;
            // 0x493aa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4939A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4939a8;
        }
    }
    ctx->pc = 0x493AA8u;
    // 0x493aa8: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x493aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493aac: 0x111102a  slt         $v0, $t0, $s1
    ctx->pc = 0x493aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x493ab0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x493AB0u;
    {
        const bool branch_taken_0x493ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493AB0u;
        // 0x493ab4: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ab0) {
            ctx->pc = 0x493970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493970;
        }
    }
    ctx->pc = 0x493AB8u;
label_493ab8:
    // 0x493ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x493ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493abc: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x493abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_493ac0:
    // 0x493ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x493ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493ac4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x493AC4u;
    {
        const bool branch_taken_0x493ac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x493AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493AC4u;
        // 0x493ac8: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ac4) {
            ctx->pc = 0x493B10u;
            goto label_493b10;
        }
    }
    ctx->pc = 0x493ACCu;
    // 0x493acc: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x493accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x493ad0: 0x1a43821  addu        $a3, $t5, $a0
    ctx->pc = 0x493ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x493ad4: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x493ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x493ad8: 0x8d840018  lw          $a0, 0x18($t4)
    ctx->pc = 0x493ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x493adc: 0x0  nop
    ctx->pc = 0x493adcu;
    // NOP
label_493ae0:
    // 0x493ae0: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x493ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x493ae4: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x493ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x493ae8: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x493ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x493aec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x493aecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493af0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x493af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x493af4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x493af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x493af8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x493af8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x493afc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x493afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x493b00: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x493b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x493b04: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x493b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493b08: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x493B08u;
    {
        const bool branch_taken_0x493b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493b08) {
            ctx->pc = 0x493B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493B08u;
            // 0x493b0c: 0x8d840018  lw          $a0, 0x18($t4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493ae0;
        }
    }
    ctx->pc = 0x493B10u;
label_493b10:
    // 0x493b10: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x493b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493b14: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x493b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x493b18: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x493B18u;
    {
        const bool branch_taken_0x493b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493b18) {
            ctx->pc = 0x493B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493B18u;
            // 0x493b1c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493ac0;
        }
    }
    ctx->pc = 0x493B20u;
    // 0x493b20: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x493b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x493b24: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x493b24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493b28: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x493b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x493b2c: 0x5440ff82  bnel        $v0, $zero, . + 4 + (-0x7E << 2)
    ctx->pc = 0x493B2Cu;
    {
        const bool branch_taken_0x493b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493b2c) {
            ctx->pc = 0x493B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493B2Cu;
            // 0x493b30: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493938;
        }
    }
    ctx->pc = 0x493B34u;
label_493b34:
    // 0x493b34: 0x7bb01070  lq          $s0, 0x1070($sp)
    ctx->pc = 0x493b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x493b38: 0x7bb11060  lq          $s1, 0x1060($sp)
    ctx->pc = 0x493b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x493b3c: 0x7bb21050  lq          $s2, 0x1050($sp)
    ctx->pc = 0x493b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x493b40: 0x7bb31040  lq          $s3, 0x1040($sp)
    ctx->pc = 0x493b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x493b44: 0x3e00008  jr          $ra
    ctx->pc = 0x493B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493B44u;
        // 0x493b48: 0x27bd1080  addiu       $sp, $sp, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493B4Cu;
    // 0x493b4c: 0x0  nop
    ctx->pc = 0x493b4cu;
    // NOP
    ctx->pc = 0x493b50u;
}
