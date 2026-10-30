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

// Function: sub_004B87E0
// Address: 0x4b87e0 - 0x4b8998
void sub_004B87E0_0x4b87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B87E0_0x4b87e0");
#endif

    switch (ctx->pc) {
        case 0x4b8840u: goto label_4b8840;
        case 0x4b8884u: goto label_4b8884;
        case 0x4b88a8u: goto label_4b88a8;
        case 0x4b8918u: goto label_4b8918;
        case 0x4b8938u: goto label_4b8938;
        case 0x4b8980u: goto label_4b8980;
        default: break;
    }

    ctx->pc = 0x4b87e0u;

    // 0x4b87e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b87e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b87e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b87e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b87e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b87e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b87ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b87ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b87f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b87f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b87f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b87f8: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4b87f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b87fc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x4b87fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b8800: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4b8800u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4b8804: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x4b8804u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x4b8808: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x4b8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4b880c: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x4b880cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4b8810: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B8810u;
    {
        const bool branch_taken_0x4b8810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8810u;
        // 0x4b8814: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8810) {
            ctx->pc = 0x4B8874u;
            goto label_4b8874;
        }
    }
    ctx->pc = 0x4B8818u;
    // 0x4b8818: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4b8818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4b881c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8820: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4b8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8824: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x4b8824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4b8828: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4B8828u;
    {
        const bool branch_taken_0x4b8828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8828u;
        // 0x4b882c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8828) {
            ctx->pc = 0x4B8980u;
            goto label_4b8980;
        }
    }
    ctx->pc = 0x4B8830u;
    // 0x4b8830: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x4b8830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x4b8834: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b8834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b8838: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B8838u;
    SET_GPR_U32(ctx, 31, 0x4B8840u);
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B8838u, 0x4B8840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8840u;
label_4b8840:
    // 0x4b8840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8844: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4b8844u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b8848: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x4b8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4b884c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8850: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x4b8850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x4b8854: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x4b8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x4b8858: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4b8858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4b885c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B885Cu;
    {
        const bool branch_taken_0x4b885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B885Cu;
        // 0x4b8860: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b885c) {
            ctx->pc = 0x4B8870u;
            goto label_4b8870;
        }
    }
    ctx->pc = 0x4B8864u;
    // 0x4b8864: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8868: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x4B8868u;
    {
        const bool branch_taken_0x4b8868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8868u;
        // 0x4b886c: 0xdc450f00  ld          $a1, 0xF00($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8868) {
            ctx->pc = 0x4B8978u;
            goto label_4b8978;
        }
    }
    ctx->pc = 0x4B8870u;
label_4b8870:
    // 0x4b8870: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x4b8870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_4b8874:
    // 0x4b8874: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8874u;
    {
        const bool branch_taken_0x4b8874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8874u;
        // 0x4b8878: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8874) {
            ctx->pc = 0x4B888Cu;
            goto label_4b888c;
        }
    }
    ctx->pc = 0x4B887Cu;
    // 0x4b887c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B887Cu;
    SET_GPR_U32(ctx, 31, 0x4B8884u);
    ctx->pc = 0x4B8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B887Cu;
    // 0x4b8880: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B887Cu, 0x4B8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8884u;
label_4b8884:
    // 0x4b8884: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x4B8884u;
    {
        const bool branch_taken_0x4b8884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8884u;
        // 0x4b8888: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8884) {
            ctx->pc = 0x4B8984u;
            goto label_4b8984;
        }
    }
    ctx->pc = 0x4B888Cu;
label_4b888c:
    // 0x4b888c: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x4b888cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x4b8890: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B8890u;
    {
        const bool branch_taken_0x4b8890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8890u;
        // 0x4b8894: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8890) {
            ctx->pc = 0x4B88B4u;
            goto label_4b88b4;
        }
    }
    ctx->pc = 0x4B8898u;
    // 0x4b8898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b889c: 0xdc500f08  ld          $s0, 0xF08($v0)
    ctx->pc = 0x4b889cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x4b88a0: 0xc12f8b0  jal         func_4BE2C0
    ctx->pc = 0x4B88A0u;
    SET_GPR_U32(ctx, 31, 0x4B88A8u);
    ctx->pc = 0x4B88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B88A0u;
    // 0x4b88a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE2C0u, 0x4B88A0u, 0x4B88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88A8u;
label_4b88a8:
    // 0x4b88a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b88a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b88ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4B88ACu;
    {
        const bool branch_taken_0x4b88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88ACu;
        // 0x4b88b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88ac) {
            ctx->pc = 0x4B8978u;
            goto label_4b8978;
        }
    }
    ctx->pc = 0x4B88B4u;
label_4b88b4:
    // 0x4b88b4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4B88B4u;
    {
        const bool branch_taken_0x4b88b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88B4u;
        // 0x4b88b8: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88b4) {
            ctx->pc = 0x4B88F0u;
            goto label_4b88f0;
        }
    }
    ctx->pc = 0x4B88BCu;
    // 0x4b88bc: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x4b88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x4b88c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b88c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b88c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4b88c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b88c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4b88c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b88cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b88ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b88d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b88d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b88d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b88d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b88d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b88dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b88e0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x4b88e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b88e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x4B88E4u;
    {
        const bool branch_taken_0x4b88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88E4u;
        // 0x4b88e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88e4) {
            ctx->pc = 0x4B8980u;
            goto label_4b8980;
        }
    }
    ctx->pc = 0x4B88ECu;
    // 0x4b88ec: 0x0  nop
    ctx->pc = 0x4b88ecu;
    // NOP
label_4b88f0:
    // 0x4b88f0: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x4b88f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x4b88f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B88F4u;
    {
        const bool branch_taken_0x4b88f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88F4u;
        // 0x4b88f8: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88f4) {
            ctx->pc = 0x4B8944u;
            goto label_4b8944;
        }
    }
    ctx->pc = 0x4B88FCu;
    // 0x4b88fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4b88fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b8900: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B8900u;
    {
        const bool branch_taken_0x4b8900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8900u;
        // 0x4b8904: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8900) {
            ctx->pc = 0x4B8924u;
            goto label_4b8924;
        }
    }
    ctx->pc = 0x4B8908u;
    // 0x4b8908: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b890c: 0xdc500f08  ld          $s0, 0xF08($v0)
    ctx->pc = 0x4b890cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x4b8910: 0xc12f8b0  jal         func_4BE2C0
    ctx->pc = 0x4B8910u;
    SET_GPR_U32(ctx, 31, 0x4B8918u);
    ctx->pc = 0x4B8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8910u;
    // 0x4b8914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE2C0u, 0x4B8910u, 0x4B8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8918u;
label_4b8918:
    // 0x4b8918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b891c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4B891Cu;
    {
        const bool branch_taken_0x4b891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B891Cu;
        // 0x4b8920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b891c) {
            ctx->pc = 0x4B8978u;
            goto label_4b8978;
        }
    }
    ctx->pc = 0x4B8924u;
label_4b8924:
    // 0x4b8924: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8928: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b8928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b892c: 0xdc500f00  ld          $s0, 0xF00($v0)
    ctx->pc = 0x4b892cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x590F00u));
    // 0x4b8930: 0xc12f8b0  jal         func_4BE2C0
    ctx->pc = 0x4B8930u;
    SET_GPR_U32(ctx, 31, 0x4B8938u);
    ctx->pc = 0x4B8934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8930u;
    // 0x4b8934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE2C0u, 0x4B8930u, 0x4B8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8938u;
label_4b8938:
    // 0x4b8938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b893c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4B893Cu;
    {
        const bool branch_taken_0x4b893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B893Cu;
        // 0x4b8940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b893c) {
            ctx->pc = 0x4B8978u;
            goto label_4b8978;
        }
    }
    ctx->pc = 0x4B8944u;
label_4b8944:
    // 0x4b8944: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x4b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x4b8948: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x4b8948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x4b894c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8950: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x4b8950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x4b8954: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4b8954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8958: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b8958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b895c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4b895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4b8960: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b8960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b8964: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b8964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b8968: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b896c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4b896cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4b8970: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x4b8970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x4b8974: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b8974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_4b8978:
    // 0x4b8978: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B8978u;
    SET_GPR_U32(ctx, 31, 0x4B8980u);
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B8978u, 0x4B8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8980u;
label_4b8980:
    // 0x4b8980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b8980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8984:
    // 0x4b8984: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b8984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b898c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B898Cu;
        // 0x4b8990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B898Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8994u;
    // 0x4b8994: 0x0  nop
    ctx->pc = 0x4b8994u;
    // NOP
    ctx->pc = 0x4b8998u;
}
