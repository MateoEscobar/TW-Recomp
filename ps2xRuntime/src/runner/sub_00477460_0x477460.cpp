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

// Function: sub_00477460
// Address: 0x477460 - 0x477750
void sub_00477460_0x477460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477460_0x477460");
#endif

    switch (ctx->pc) {
        case 0x477514u: goto label_477514;
        case 0x477554u: goto label_477554;
        case 0x477580u: goto label_477580;
        case 0x477590u: goto label_477590;
        case 0x4775a4u: goto label_4775a4;
        case 0x47761cu: goto label_47761c;
        case 0x47772cu: goto label_47772c;
        default: break;
    }

    ctx->pc = 0x477460u;

    // 0x477460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x477460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x477464: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x477464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x477468: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x477468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x47746c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47746cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477470: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x477470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x477474: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x477474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x477478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x477478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47747c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x477480: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x477480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x477484: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x477484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x477488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x477488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47748c: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x47748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x477490: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x477490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x477494: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x477494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x477498: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x477498u;
    {
        const bool branch_taken_0x477498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x47749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477498u;
        // 0x47749c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477498) {
            ctx->pc = 0x4774D4u;
            goto label_4774d4;
        }
    }
    ctx->pc = 0x4774A0u;
    // 0x4774a0: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x4774a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x4774a4: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x4774a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4774a8: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x4774a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4774ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4774acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4774b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4774B0u;
    {
        const bool branch_taken_0x4774b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4774B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4774B0u;
        // 0x4774b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774b0) {
            ctx->pc = 0x4774C8u;
            goto label_4774c8;
        }
    }
    ctx->pc = 0x4774B8u;
    // 0x4774b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4774b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4774bc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4774bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4774c0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4774C0u;
    {
        const bool branch_taken_0x4774c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4774C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4774C0u;
        // 0x4774c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774c0) {
            ctx->pc = 0x477514u;
            goto label_477514;
        }
    }
    ctx->pc = 0x4774C8u;
label_4774c8:
    // 0x4774c8: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x4774c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4774cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4774CCu;
    {
        const bool branch_taken_0x4774cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4774D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4774CCu;
        // 0x4774d0: 0x2662021  addu        $a0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774cc) {
            ctx->pc = 0x47750Cu;
            goto label_47750c;
        }
    }
    ctx->pc = 0x4774D4u;
label_4774d4:
    // 0x4774d4: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x4774d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4774d8: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x4774d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4774dc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x4774dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4774e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4774e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4774e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4774E4u;
    {
        const bool branch_taken_0x4774e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4774E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4774E4u;
        // 0x4774e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774e4) {
            ctx->pc = 0x477504u;
            goto label_477504;
        }
    }
    ctx->pc = 0x4774ECu;
    // 0x4774ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4774ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4774f0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4774f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4774f4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4774F4u;
    {
        const bool branch_taken_0x4774f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4774f4) {
            ctx->pc = 0x4774F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4774F4u;
            // 0x4774f8: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477508u;
            goto label_477508;
        }
    }
    ctx->pc = 0x4774FCu;
    // 0x4774fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4774FCu;
    {
        const bool branch_taken_0x4774fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4774FCu;
        // 0x477500: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774fc) {
            ctx->pc = 0x477514u;
            goto label_477514;
        }
    }
    ctx->pc = 0x477504u;
label_477504:
    // 0x477504: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x477504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_477508:
    // 0x477508: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x477508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_47750c:
    // 0x47750c: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47750Cu;
    SET_GPR_U32(ctx, 31, 0x477514u);
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47750Cu, 0x477514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477514u;
label_477514:
    // 0x477514: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x477514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477518: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x477518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x47751c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x47751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x477520: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x477520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x477524: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x477524u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x477528: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x477528u;
    {
        const bool branch_taken_0x477528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477528u;
        // 0x47752c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477528) {
            ctx->pc = 0x477548u;
            goto label_477548;
        }
    }
    ctx->pc = 0x477530u;
    // 0x477530: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x477530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x477534: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x477534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x477538: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x477538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47753c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47753cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x477540: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x477540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x477544: 0x0  nop
    ctx->pc = 0x477544u;
    // NOP
label_477548:
    // 0x477548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x477548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47754c: 0xc11dc38  jal         func_4770E0
    ctx->pc = 0x47754Cu;
    SET_GPR_U32(ctx, 31, 0x477554u);
    ctx->pc = 0x477550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47754Cu;
    // 0x477550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4770E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4770E0u, 0x47754Cu, 0x477554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477554u;
label_477554:
    // 0x477554: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x477554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x477558: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x477558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x47755c: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x47755cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x477560: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x477560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x477564: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x477564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x477568: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x477568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x47756c: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x47756cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x477570: 0x8e30ad18  lw          $s0, -0x52E8($s1)
    ctx->pc = 0x477570u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x70AD18u));
    // 0x477574: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x477574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x477578: 0xc12104a  jal         func_484128
    ctx->pc = 0x477578u;
    SET_GPR_U32(ctx, 31, 0x477580u);
    ctx->pc = 0x47757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477578u;
    // 0x47757c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x477578u, 0x477580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477580u;
label_477580:
    // 0x477580: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x477580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x477584: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x477584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477588: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x477588u;
    SET_GPR_U32(ctx, 31, 0x477590u);
    ctx->pc = 0x47758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477588u;
    // 0x47758c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x477588u, 0x477590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477590u;
label_477590:
    // 0x477590: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x477590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x477594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x477598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x477598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47759c: 0xc11a45e  jal         func_469178
    ctx->pc = 0x47759Cu;
    SET_GPR_U32(ctx, 31, 0x4775A4u);
    ctx->pc = 0x4775A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47759Cu;
    // 0x4775a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x47759Cu, 0x4775A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4775A4u;
label_4775a4:
    // 0x4775a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4775a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4775a8: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x4775a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x4775ac: 0x8e22ad18  lw          $v0, -0x52E8($s1)
    ctx->pc = 0x4775acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946072)));
    // 0x4775b0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4775b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4775b4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4775b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4775b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4775b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4775bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4775bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4775c0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x4775c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4775c4: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x4775c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x4775c8: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x4775c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4775cc: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x4775ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4775d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4775d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4775d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4775d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4775d8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4775d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4775dc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4775dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4775e0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4775e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4775e4: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x4775e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4775e8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4775e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4775ec: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x4775ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4775f0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4775f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4775f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4775f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4775f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4775f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4775fc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4775fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x477600: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x477600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x477604: 0x0  nop
    ctx->pc = 0x477604u;
    // NOP
    // 0x477608: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x477608u;
    {
        const bool branch_taken_0x477608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477608u;
        // 0x47760c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477608) {
            ctx->pc = 0x477618u;
            goto label_477618;
        }
    }
    ctx->pc = 0x477610u;
    // 0x477610: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x477610u;
    {
        const bool branch_taken_0x477610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477610u;
        // 0x477614: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477610) {
            ctx->pc = 0x477674u;
            goto label_477674;
        }
    }
    ctx->pc = 0x477618u;
label_477618:
    // 0x477618: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x477618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_47761c:
    // 0x47761c: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x47761Cu;
    {
        const bool branch_taken_0x47761c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x477620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47761Cu;
        // 0x477620: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47761c) {
            ctx->pc = 0x477674u;
            goto label_477674;
        }
    }
    ctx->pc = 0x477624u;
    // 0x477624: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x477624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x477628: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x477628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47762c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x47762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477630: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x477630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x477634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x477634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x477638: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x477638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47763c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x47763cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x477640: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x477640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x477644: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x477644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x477648: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x477648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x47764c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x47764cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x477650: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x477650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x477654: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x477654u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x477658: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x477658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x47765c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x47765cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x477660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x477660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x477664: 0x0  nop
    ctx->pc = 0x477664u;
    // NOP
    // 0x477668: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x477668u;
    {
        const bool branch_taken_0x477668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x477668) {
            ctx->pc = 0x47766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477668u;
            // 0x47766c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47761Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47761c;
        }
    }
    ctx->pc = 0x477670u;
    // 0x477670: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x477670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_477674:
    // 0x477674: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x477674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x477678: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x477678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47767c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x47767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x477680: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x477680u;
    {
        const bool branch_taken_0x477680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x477684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477680u;
        // 0x477684: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477680) {
            ctx->pc = 0x4776B8u;
            goto label_4776b8;
        }
    }
    ctx->pc = 0x477688u;
    // 0x477688: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x477688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x47768c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47768Cu;
    {
        const bool branch_taken_0x47768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47768Cu;
        // 0x477690: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47768c) {
            ctx->pc = 0x4776A0u;
            goto label_4776a0;
        }
    }
    ctx->pc = 0x477694u;
    // 0x477694: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x477694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x477698: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x477698u;
    {
        const bool branch_taken_0x477698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477698) {
            ctx->pc = 0x47769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477698u;
            // 0x47769c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4776B0u;
            goto label_4776b0;
        }
    }
    ctx->pc = 0x4776A0u;
label_4776a0:
    // 0x4776a0: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4776a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4776a4: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4776a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4776a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4776A8u;
    {
        const bool branch_taken_0x4776a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4776ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4776A8u;
        // 0x4776ac: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4776a8) {
            ctx->pc = 0x4776F4u;
            goto label_4776f4;
        }
    }
    ctx->pc = 0x4776B0u;
label_4776b0:
    // 0x4776b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4776B0u;
    {
        const bool branch_taken_0x4776b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4776B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4776B0u;
        // 0x4776b4: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4776b0) {
            ctx->pc = 0x4776CCu;
            goto label_4776cc;
        }
    }
    ctx->pc = 0x4776B8u;
label_4776b8:
    // 0x4776b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4776b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4776bc: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x4776bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x4776c0: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x4776c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4776c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4776C4u;
    {
        const bool branch_taken_0x4776c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4776C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4776C4u;
        // 0x4776c8: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4776c4) {
            ctx->pc = 0x4776F8u;
            goto label_4776f8;
        }
    }
    ctx->pc = 0x4776CCu;
label_4776cc:
    // 0x4776cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4776CCu;
    {
        const bool branch_taken_0x4776cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4776D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4776CCu;
        // 0x4776d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4776cc) {
            ctx->pc = 0x4776E4u;
            goto label_4776e4;
        }
    }
    ctx->pc = 0x4776D4u;
    // 0x4776d4: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4776d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4776d8: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4776d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4776dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4776DCu;
    {
        const bool branch_taken_0x4776dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4776E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4776DCu;
        // 0x4776e0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4776dc) {
            ctx->pc = 0x4776F4u;
            goto label_4776f4;
        }
    }
    ctx->pc = 0x4776E4u;
label_4776e4:
    // 0x4776e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4776e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4776e8: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4776e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4776ec: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4776ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4776f0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x4776f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_4776f4:
    // 0x4776f4: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x4776f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_4776f8:
    // 0x4776f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4776f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4776fc: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4776FCu;
    {
        const bool branch_taken_0x4776fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4776fc) {
            ctx->pc = 0x477700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4776FCu;
            // 0x477700: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477714u;
            goto label_477714;
        }
    }
    ctx->pc = 0x477704u;
    // 0x477704: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x477704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x477708: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x477708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x47770c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x47770cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x477710: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x477710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_477714:
    // 0x477714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x477714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477718: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x477718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47771c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x47771cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x477720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x477720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x477724: 0xc11dc82  jal         func_477208
    ctx->pc = 0x477724u;
    SET_GPR_U32(ctx, 31, 0x47772Cu);
    ctx->pc = 0x477728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477724u;
    // 0x477728: 0xa242002a  sb          $v0, 0x2A($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x477208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477208u, 0x477724u, 0x47772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47772Cu;
label_47772c:
    // 0x47772c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x47772cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x477730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x477730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477734: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x477734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477738: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x477738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47773c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47773cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477740: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x477740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x477744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477748: 0x3e00008  jr          $ra
    ctx->pc = 0x477748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477748u;
        // 0x47774c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477750u;
}
