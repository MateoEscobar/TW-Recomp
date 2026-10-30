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

// Function: sub_00494E70
// Address: 0x494e70 - 0x4950d8
void sub_00494E70_0x494e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494E70_0x494e70");
#endif

    switch (ctx->pc) {
        case 0x494f9cu: goto label_494f9c;
        case 0x494fb0u: goto label_494fb0;
        case 0x494fd0u: goto label_494fd0;
        case 0x49501cu: goto label_49501c;
        case 0x495068u: goto label_495068;
        case 0x4950a0u: goto label_4950a0;
        default: break;
    }

    ctx->pc = 0x494e70u;

    // 0x494e70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x494e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x494e74: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x494e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x494e78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x494e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x494e7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x494e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494e80: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x494e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x494e84: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x494e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x494e88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x494e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x494e8c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x494e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x494e90: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x494e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x494e94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x494e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x494e98: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x494e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x494e9c: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x494e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x494ea0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x494EA0u;
    {
        const bool branch_taken_0x494ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494EA0u;
        // 0x494ea4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ea0) {
            ctx->pc = 0x494FD8u;
            goto label_494fd8;
        }
    }
    ctx->pc = 0x494EA8u;
    // 0x494ea8: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x494ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x494eac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x494eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x494eb0: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x494eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x494eb4: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x494eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x494eb8: 0x92840020  lbu         $a0, 0x20($s4)
    ctx->pc = 0x494eb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x494ebc: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x494ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x494ec0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x494ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x494ec4: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x494ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x494ec8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x494ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x494ecc: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x494eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x494ed0: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x494ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x494ed4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x494ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x494ed8: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x494ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x494edc: 0x92630036  lbu         $v1, 0x36($s3)
    ctx->pc = 0x494edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x494ee0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x494ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x494ee4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x494ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x494ee8: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x494ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x494eec: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x494eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x494ef0: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x494EF0u;
    {
        const bool branch_taken_0x494ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x494EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494EF0u;
        // 0x494ef4: 0xa7a0000e  sh          $zero, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ef0) {
            ctx->pc = 0x494F0Cu;
            goto label_494f0c;
        }
    }
    ctx->pc = 0x494EF8u;
    // 0x494ef8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x494ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x494efc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x494EFCu;
    {
        const bool branch_taken_0x494efc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x494efc) {
            ctx->pc = 0x494F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494EFCu;
            // 0x494f00: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494F10u;
            goto label_494f10;
        }
    }
    ctx->pc = 0x494F04u;
    // 0x494f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x494f08: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x494f08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_494f0c:
    // 0x494f0c: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x494f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_494f10:
    // 0x494f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x494f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x494f14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x494F14u;
    {
        const bool branch_taken_0x494f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494F14u;
        // 0x494f18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494f14) {
            ctx->pc = 0x494F20u;
            goto label_494f20;
        }
    }
    ctx->pc = 0x494F1Cu;
    // 0x494f1c: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x494f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_494f20:
    // 0x494f20: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x494f20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x494f24: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x494f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x494f28: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x494f28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x494f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x494f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494f30: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x494f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x494f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x494f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x494f38: 0x926f0016  lbu         $t7, 0x16($s3)
    ctx->pc = 0x494f38u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x494f3c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x494f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x494f40: 0x8e6e0018  lw          $t6, 0x18($s3)
    ctx->pc = 0x494f40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x494f44: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x494f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x494f48: 0x8e6d001c  lw          $t5, 0x1C($s3)
    ctx->pc = 0x494f48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x494f4c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x494f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x494f50: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x494f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x494f54: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x494f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x494f58: 0x8e690028  lw          $t1, 0x28($s3)
    ctx->pc = 0x494f58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x494f5c: 0x8e6a002c  lw          $t2, 0x2C($s3)
    ctx->pc = 0x494f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x494f60: 0x8e6b0030  lw          $t3, 0x30($s3)
    ctx->pc = 0x494f60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x494f64: 0x966c0014  lhu         $t4, 0x14($s3)
    ctx->pc = 0x494f64u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x494f68: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x494f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x494f6c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x494f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x494f70: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x494f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x494f74: 0xafaf001c  sw          $t7, 0x1C($sp)
    ctx->pc = 0x494f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 15));
    // 0x494f78: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x494f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x494f7c: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x494f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x494f80: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x494f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x494f84: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x494f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x494f88: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x494f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x494f8c: 0xafaa0034  sw          $t2, 0x34($sp)
    ctx->pc = 0x494f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 10));
    // 0x494f90: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x494f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x494f94: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x494F94u;
    SET_GPR_U32(ctx, 31, 0x494F9Cu);
    ctx->pc = 0x494F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494F94u;
    // 0x494f98: 0xafac003c  sw          $t4, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x494F94u, 0x494F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494F9Cu;
label_494f9c:
    // 0x494f9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x494F9Cu;
    {
        const bool branch_taken_0x494f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494F9Cu;
        // 0x494fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494f9c) {
            ctx->pc = 0x494FD8u;
            goto label_494fd8;
        }
    }
    ctx->pc = 0x494FA4u;
    // 0x494fa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x494fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494fa8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x494FA8u;
    SET_GPR_U32(ctx, 31, 0x494FB0u);
    ctx->pc = 0x494FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494FA8u;
    // 0x494fac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x494FA8u, 0x494FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494FB0u;
label_494fb0:
    // 0x494fb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x494FB0u;
    {
        const bool branch_taken_0x494fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FB0u;
        // 0x494fb4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fb0) {
            ctx->pc = 0x494FD8u;
            goto label_494fd8;
        }
    }
    ctx->pc = 0x494FB8u;
    // 0x494fb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x494fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x494fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x494fc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x494fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494fc4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x494fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x494fc8: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x494FC8u;
    SET_GPR_U32(ctx, 31, 0x494FD0u);
    ctx->pc = 0x494FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494FC8u;
    // 0x494fcc: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x494FC8u, 0x494FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494FD0u;
label_494fd0:
    // 0x494fd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x494FD0u;
    {
        const bool branch_taken_0x494fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FD0u;
        // 0x494fd4: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fd0) {
            ctx->pc = 0x494FE0u;
            goto label_494fe0;
        }
    }
    ctx->pc = 0x494FD8u;
label_494fd8:
    // 0x494fd8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x494FD8u;
    {
        const bool branch_taken_0x494fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FD8u;
        // 0x494fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fd8) {
            ctx->pc = 0x4950ACu;
            goto label_4950ac;
        }
    }
    ctx->pc = 0x494FE0u;
label_494fe0:
    // 0x494fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x494fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494fe4: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x494fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x494fe8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x494FE8u;
    {
        const bool branch_taken_0x494fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FE8u;
        // 0x494fec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494fe8) {
            ctx->pc = 0x494FFCu;
            goto label_494ffc;
        }
    }
    ctx->pc = 0x494FF0u;
    // 0x494ff0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x494ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x494ff4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x494FF4u;
    {
        const bool branch_taken_0x494ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494FF4u;
        // 0x494ff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ff4) {
            ctx->pc = 0x495098u;
            goto label_495098;
        }
    }
    ctx->pc = 0x494FFCu;
label_494ffc:
    // 0x494ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x495000: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x495000u;
    {
        const bool branch_taken_0x495000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x495004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495000u;
        // 0x495004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495000) {
            ctx->pc = 0x4950ACu;
            goto label_4950ac;
        }
    }
    ctx->pc = 0x495008u;
    // 0x495008: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x495008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x49500c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495010: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x495010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x495014: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x495014u;
    SET_GPR_U32(ctx, 31, 0x49501Cu);
    ctx->pc = 0x495018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495014u;
    // 0x495018: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x495014u, 0x49501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49501Cu;
label_49501c:
    // 0x49501c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x49501Cu;
    {
        const bool branch_taken_0x49501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49501Cu;
        // 0x495020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49501c) {
            ctx->pc = 0x4950ACu;
            goto label_4950ac;
        }
    }
    ctx->pc = 0x495024u;
    // 0x495024: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x495024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x495028: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x495028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x49502c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x49502Cu;
    {
        const bool branch_taken_0x49502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49502c) {
            ctx->pc = 0x495030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49502Cu;
            // 0x495030: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495088u;
            goto label_495088;
        }
    }
    ctx->pc = 0x495034u;
    // 0x495034: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x495034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x495038: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x495038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x49503c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x495040: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x495040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x495044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x495044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x495048: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x495048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49504c: 0x5085000e  beql        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x49504Cu;
    {
        const bool branch_taken_0x49504c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x49504c) {
            ctx->pc = 0x495050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49504Cu;
            // 0x495050: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495088u;
            goto label_495088;
        }
    }
    ctx->pc = 0x495054u;
    // 0x495054: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x495054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x495058: 0x2443ffb0  addiu       $v1, $v0, -0x50
    ctx->pc = 0x495058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x49505c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x49505Cu;
    {
        const bool branch_taken_0x49505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49505c) {
            ctx->pc = 0x495060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49505Cu;
            // 0x495060: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495088u;
            goto label_495088;
        }
    }
    ctx->pc = 0x495064u;
    // 0x495064: 0x0  nop
    ctx->pc = 0x495064u;
    // NOP
label_495068:
    // 0x495068: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x495068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49506c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x49506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x495070: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x495070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x495074: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x495074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x495078: 0x0  nop
    ctx->pc = 0x495078u;
    // NOP
    // 0x49507c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49507Cu;
    {
        const bool branch_taken_0x49507c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x495080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49507Cu;
        // 0x495080: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49507c) {
            ctx->pc = 0x495068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495068;
        }
    }
    ctx->pc = 0x495084u;
    // 0x495084: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x495084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_495088:
    // 0x495088: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x495088u;
    {
        const bool branch_taken_0x495088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495088u;
        // 0x49508c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495088) {
            ctx->pc = 0x4950A8u;
            goto label_4950a8;
        }
    }
    ctx->pc = 0x495090u;
    // 0x495090: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x495090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x495094: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x495094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
label_495098:
    // 0x495098: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x495098u;
    SET_GPR_U32(ctx, 31, 0x4950A0u);
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x495098u, 0x4950A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4950A0u;
label_4950a0:
    // 0x4950a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4950A0u;
    {
        const bool branch_taken_0x4950a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4950A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4950A0u;
        // 0x4950a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4950a0) {
            ctx->pc = 0x4950ACu;
            goto label_4950ac;
        }
    }
    ctx->pc = 0x4950A8u;
label_4950a8:
    // 0x4950a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4950a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4950ac:
    // 0x4950ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4950acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4950b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4950b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4950b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4950b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4950b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4950b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4950bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4950bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4950c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4950c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4950c4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4950c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4950c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4950c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4950cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4950CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4950D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4950CCu;
        // 0x4950d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4950CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4950D4u;
    // 0x4950d4: 0x0  nop
    ctx->pc = 0x4950d4u;
    // NOP
    ctx->pc = 0x4950d8u;
}
