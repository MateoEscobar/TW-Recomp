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

// Function: sub_00467770
// Address: 0x467770 - 0x467840
void sub_00467770_0x467770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467770_0x467770");
#endif

    switch (ctx->pc) {
        case 0x4677a0u: goto label_4677a0;
        case 0x46781cu: goto label_46781c;
        default: break;
    }

    ctx->pc = 0x467770u;

    // 0x467770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x467770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x467774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x467774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x467778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x467778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x46777c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x46777cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467780: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x467780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x467784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467788: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x467788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46778c: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x46778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x467790: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x467790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x467794: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x467794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x467798: 0xc11aa18  jal         func_46A860
    ctx->pc = 0x467798u;
    SET_GPR_U32(ctx, 31, 0x4677A0u);
    ctx->pc = 0x46779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467798u;
    // 0x46779c: 0x389c3  sra         $s1, $v1, 7 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A860u, 0x467798u, 0x4677A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4677A0u;
label_4677a0:
    // 0x4677a0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4677a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4677a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4677a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4677a8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4677A8u;
    {
        const bool branch_taken_0x4677a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4677ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677A8u;
        // 0x4677ac: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677a8) {
            ctx->pc = 0x4677D4u;
            goto label_4677d4;
        }
    }
    ctx->pc = 0x4677B0u;
    // 0x4677b0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4677b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4677b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4677B4u;
    {
        const bool branch_taken_0x4677b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4677B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677B4u;
        // 0x4677b8: 0x34841002  ori         $a0, $a0, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677b4) {
            ctx->pc = 0x467814u;
            goto label_467814;
        }
    }
    ctx->pc = 0x4677BCu;
    // 0x4677bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4677bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4677c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4677c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4677c4: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x4677c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x4677c8: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x4677c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x4677cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4677CCu;
    {
        const bool branch_taken_0x4677cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677CCu;
        // 0x4677d0: 0x51200b  movn        $a0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677cc) {
            ctx->pc = 0x467814u;
            goto label_467814;
        }
    }
    ctx->pc = 0x4677D4u;
label_4677d4:
    // 0x4677d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4677d8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4677D8u;
    {
        const bool branch_taken_0x4677d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677D8u;
        // 0x4677dc: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677d8) {
            ctx->pc = 0x4677F0u;
            goto label_4677f0;
        }
    }
    ctx->pc = 0x4677E0u;
    // 0x4677e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4677E0u;
    {
        const bool branch_taken_0x4677e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4677E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677E0u;
        // 0x4677e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677e0) {
            ctx->pc = 0x46780Cu;
            goto label_46780c;
        }
    }
    ctx->pc = 0x4677E8u;
    // 0x4677e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4677E8u;
    {
        const bool branch_taken_0x4677e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4677ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4677E8u;
        // 0x4677ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4677e8) {
            ctx->pc = 0x46780Cu;
            goto label_46780c;
        }
    }
    ctx->pc = 0x4677F0u;
label_4677f0:
    // 0x4677f0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4677f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4677f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4677f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4677f8: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x4677f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x4677fc: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x4677fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x467800: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x467800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x467804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x467804u;
    {
        const bool branch_taken_0x467804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467804u;
        // 0x467808: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467804) {
            ctx->pc = 0x467814u;
            goto label_467814;
        }
    }
    ctx->pc = 0x46780Cu;
label_46780c:
    // 0x46780c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x46780cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x467810: 0x34841002  ori         $a0, $a0, 0x1002
    ctx->pc = 0x467810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
label_467814:
    // 0x467814: 0xc11851c  jal         func_461470
    ctx->pc = 0x467814u;
    SET_GPR_U32(ctx, 31, 0x46781Cu);
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x467814u, 0x46781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46781Cu;
label_46781c:
    // 0x46781c: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x46781cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x467820: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x467820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467824: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x467824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467828: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x467828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46782c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x46782cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467834: 0x3e00008  jr          $ra
    ctx->pc = 0x467834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467834u;
        // 0x467838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46783Cu;
    // 0x46783c: 0x0  nop
    ctx->pc = 0x46783cu;
    // NOP
    ctx->pc = 0x467840u;
}
