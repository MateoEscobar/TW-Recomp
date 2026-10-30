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

// Function: sub_004CADB8
// Address: 0x4cadb8 - 0x4caf20
void sub_004CADB8_0x4cadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CADB8_0x4cadb8");
#endif

    switch (ctx->pc) {
        case 0x4cae20u: goto label_4cae20;
        default: break;
    }

    ctx->pc = 0x4cadb8u;

    // 0x4cadb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cadb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cadbc: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4cadbcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cadc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cadc4: 0x24aeffff  addiu       $t6, $a1, -0x1
    ctx->pc = 0x4cadc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4cadc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cadc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cadcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cadccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cadd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cadd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cadd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cadd8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4caddc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4caddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cade0: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x4CADE0u;
    {
        const bool branch_taken_0x4cade0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CADE0u;
        // 0x4cade4: 0xffb70038  sd          $s7, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cade0) {
            ctx->pc = 0x4CAEF4u;
            goto label_4caef4;
        }
    }
    ctx->pc = 0x4CADE8u;
    // 0x4cade8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cadec: 0x3c190053  lui         $t9, 0x53
    ctx->pc = 0x4cadecu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)83 << 16));
    // 0x4cadf0: 0x245828a0  addiu       $t8, $v0, 0x28A0
    ctx->pc = 0x4cadf0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4cadf4: 0x272b2860  addiu       $t3, $t9, 0x2860
    ctx->pc = 0x4cadf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 10336));
    // 0x4cadf8: 0x27170800  addiu       $s7, $t8, 0x800
    ctx->pc = 0x4cadf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), 2048));
    // 0x4cadfc: 0x27160400  addiu       $s6, $t8, 0x400
    ctx->pc = 0x4cadfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 24), 1024));
    // 0x4cae00: 0x27150c00  addiu       $s5, $t8, 0xC00
    ctx->pc = 0x4cae00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 24), 3072));
    // 0x4cae04: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cae04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cae08: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cae08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cae0c: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4cae0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4cae10: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4cae10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4cae14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x4cae14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cae18: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x4cae18u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x532870u));
    // 0x4cae1c: 0x0  nop
    ctx->pc = 0x4cae1cu;
    // NOP
label_4cae20:
    // 0x4cae20: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x4cae20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x4cae24: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x4cae24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4cae28: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x4cae28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x4cae2c: 0x8d6c0014  lw          $t4, 0x14($t3)
    ctx->pc = 0x4cae2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x4cae30: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x4cae30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cae34: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4cae34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cae38: 0x91860000  lbu         $a2, 0x0($t4)
    ctx->pc = 0x4cae38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cae3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cae40: 0x8e832840  lw          $v1, 0x2840($s4)
    ctx->pc = 0x4cae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10304)));
    // 0x4cae44: 0x973821  addu        $a3, $a0, $s7
    ctx->pc = 0x4cae44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x4cae48: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4cae48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4cae4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cae50: 0xd64021  addu        $t0, $a2, $s6
    ctx->pc = 0x4cae50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x4cae54: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4cae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cae58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cae5c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4cae5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cae60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cae64: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x4cae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x4cae68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cae6c: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x4cae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4cae70: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4cae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cae74: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4cae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4cae78: 0x8e662844  lw          $a2, 0x2844($s3)
    ctx->pc = 0x4cae78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10308)));
    // 0x4cae7c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4cae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4cae80: 0x8e482848  lw          $t0, 0x2848($s2)
    ctx->pc = 0x4cae80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10312)));
    // 0x4cae84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4cae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cae88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4cae88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4cae8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cae90: 0xad690008  sw          $t1, 0x8($t3)
    ctx->pc = 0x4cae90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 9));
    // 0x4cae94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cae98: 0x8e27284c  lw          $a3, 0x284C($s1)
    ctx->pc = 0x4cae98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10316)));
    // 0x4cae9c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4cae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4caea0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4caea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4caea4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4caea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4caea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4caea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4caeac: 0x94440400  lhu         $a0, 0x400($v0)
    ctx->pc = 0x4caeacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x4caeb0: 0x94a60400  lhu         $a2, 0x400($a1)
    ctx->pc = 0x4caeb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x4caeb4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4caeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4caeb8: 0x94620400  lhu         $v0, 0x400($v1)
    ctx->pc = 0x4caeb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x4caebc: 0x8f252860  lw          $a1, 0x2860($t9)
    ctx->pc = 0x4caebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 10336)));
    // 0x4caec0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4caec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4caec4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4caec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4caec8: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x4caec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4caecc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4caeccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4caed0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CAED0u;
    {
        const bool branch_taken_0x4caed0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAED0u;
        // 0x4caed4: 0xaf232860  sw          $v1, 0x2860($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 10336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4caed0) {
            ctx->pc = 0x4CAEE8u;
            goto label_4caee8;
        }
    }
    ctx->pc = 0x4CAED8u;
    // 0x4caed8: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x4caed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4caedc: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x4caedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4caee0: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x4caee0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x4caee4: 0xad630014  sw          $v1, 0x14($t3)
    ctx->pc = 0x4caee4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 3));
label_4caee8:
    // 0x4caee8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x4caee8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x4caeec: 0x55d0ffcc  bnel        $t6, $s0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x4CAEECu;
    {
        const bool branch_taken_0x4caeec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 16));
        if (branch_taken_0x4caeec) {
            ctx->pc = 0x4CAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CAEECu;
            // 0x4caef0: 0x8d6d0010  lw          $t5, 0x10($t3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CAE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cae20;
        }
    }
    ctx->pc = 0x4CAEF4u;
label_4caef4:
    // 0x4caef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4caef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4caef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4caef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4caefc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4caefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4caf00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4caf00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4caf04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4caf04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4caf08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4caf08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4caf0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4caf0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4caf10: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4caf10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4caf14: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAF14u;
        // 0x4caf18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CAF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CAF1Cu;
    // 0x4caf1c: 0x0  nop
    ctx->pc = 0x4caf1cu;
    // NOP
    ctx->pc = 0x4caf20u;
}
