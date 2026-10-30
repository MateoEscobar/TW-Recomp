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

// Function: sub_00423098
// Address: 0x423098 - 0x4231b8
void sub_00423098_0x423098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423098_0x423098");
#endif

    switch (ctx->pc) {
        case 0x4230e8u: goto label_4230e8;
        case 0x4230fcu: goto label_4230fc;
        case 0x42311cu: goto label_42311c;
        case 0x42312cu: goto label_42312c;
        case 0x42316cu: goto label_42316c;
        case 0x423184u: goto label_423184;
        default: break;
    }

    ctx->pc = 0x423098u;

    // 0x423098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x423098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x42309c: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x42309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4230a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4230a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4230a4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x4230a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x4230a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4230a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4230ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4230acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4230b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4230b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4230b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4230b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4230b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4230b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4230bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4230bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4230c0: 0x8e85489c  lw          $a1, 0x489C($s4)
    ctx->pc = 0x4230c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x4230c4: 0x94a356dc  lhu         $v1, 0x56DC($a1)
    ctx->pc = 0x4230c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22236)));
    // 0x4230c8: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x4230c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4230cc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x4230ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4230d0: 0x907014e0  lbu         $s0, 0x14E0($v1)
    ctx->pc = 0x4230d0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5344)));
    // 0x4230d4: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x4230d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x4230d8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4230D8u;
    {
        const bool branch_taken_0x4230d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4230DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4230D8u;
        // 0x4230dc: 0x24a40228  addiu       $a0, $a1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4230d8) {
            ctx->pc = 0x423190u;
            goto label_423190;
        }
    }
    ctx->pc = 0x4230E0u;
    // 0x4230e0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x4230E0u;
    SET_GPR_U32(ctx, 31, 0x4230E8u);
    ctx->pc = 0x4230E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4230E0u;
    // 0x4230e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4230E0u, 0x4230E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4230E8u;
label_4230e8:
    // 0x4230e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4230e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4230ec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4230ECu;
    {
        const bool branch_taken_0x4230ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4230ECu;
        // 0x4230f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4230ec) {
            ctx->pc = 0x423100u;
            goto label_423100;
        }
    }
    ctx->pc = 0x4230F4u;
    // 0x4230f4: 0xc108a66  jal         func_422998
    ctx->pc = 0x4230F4u;
    SET_GPR_U32(ctx, 31, 0x4230FCu);
    ctx->pc = 0x4230F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4230F4u;
    // 0x4230f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422998u, 0x4230F4u, 0x4230FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4230FCu;
label_4230fc:
    // 0x4230fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4230fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_423100:
    // 0x423100: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x423100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x423104: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x423104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x423108: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x423108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x42310c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42310Cu;
    {
        const bool branch_taken_0x42310c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42310Cu;
        // 0x423110: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42310c) {
            ctx->pc = 0x423134u;
            goto label_423134;
        }
    }
    ctx->pc = 0x423114u;
    // 0x423114: 0xc0e409a  jal         func_390268
    ctx->pc = 0x423114u;
    SET_GPR_U32(ctx, 31, 0x42311Cu);
    ctx->pc = 0x423118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423114u;
    // 0x423118: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x423114u, 0x42311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42311Cu;
label_42311c:
    // 0x42311c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42311Cu;
    {
        const bool branch_taken_0x42311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42311Cu;
        // 0x423120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42311c) {
            ctx->pc = 0x423130u;
            goto label_423130;
        }
    }
    ctx->pc = 0x423124u;
    // 0x423124: 0xc108a66  jal         func_422998
    ctx->pc = 0x423124u;
    SET_GPR_U32(ctx, 31, 0x42312Cu);
    ctx->pc = 0x423128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423124u;
    // 0x423128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422998u, 0x423124u, 0x42312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42312Cu;
label_42312c:
    // 0x42312c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x42312cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_423130:
    // 0x423130: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x423130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_423134:
    // 0x423134: 0x26430300  addiu       $v1, $s2, 0x300
    ctx->pc = 0x423134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x423138: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x423138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x42313c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x42313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x423140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x423140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x423144: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x423144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x423148: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x423148u;
    {
        const bool branch_taken_0x423148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423148) {
            ctx->pc = 0x42314Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423148u;
            // 0x42314c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423194u;
            goto label_423194;
        }
    }
    ctx->pc = 0x423150u;
    // 0x423150: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x423150u;
    {
        const bool branch_taken_0x423150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x423154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423150u;
        // 0x423154: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423150) {
            ctx->pc = 0x423188u;
            goto label_423188;
        }
    }
    ctx->pc = 0x423158u;
    // 0x423158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x423158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42315c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x423160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x423164: 0xc108ac0  jal         func_422B00
    ctx->pc = 0x423164u;
    SET_GPR_U32(ctx, 31, 0x42316Cu);
    ctx->pc = 0x423168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423164u;
    // 0x423168: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422B00u, 0x423164u, 0x42316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42316Cu;
label_42316c:
    // 0x42316c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42316cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x423170: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x423170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x423174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x423174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x423178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42317c: 0xc108af6  jal         func_422BD8
    ctx->pc = 0x42317Cu;
    SET_GPR_U32(ctx, 31, 0x423184u);
    ctx->pc = 0x423180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42317Cu;
    // 0x423180: 0xa2020309  sb          $v0, 0x309($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 777), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422BD8u, 0x42317Cu, 0x423184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423184u;
label_423184:
    // 0x423184: 0xa2020308  sb          $v0, 0x308($s0)
    ctx->pc = 0x423184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 776), (uint8_t)GPR_U32(ctx, 2));
label_423188:
    // 0x423188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x423188u;
    {
        const bool branch_taken_0x423188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423188u;
        // 0x42318c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423188) {
            ctx->pc = 0x423194u;
            goto label_423194;
        }
    }
    ctx->pc = 0x423190u;
label_423190:
    // 0x423190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x423190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423194:
    // 0x423194: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x423194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x423198: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x423198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42319c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42319cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4231a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4231a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4231a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4231a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4231a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4231a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4231ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4231ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4231B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231ACu;
        // 0x4231b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4231ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4231B4u;
    // 0x4231b4: 0x0  nop
    ctx->pc = 0x4231b4u;
    // NOP
    ctx->pc = 0x4231b8u;
}
