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

// Function: sub_00464210
// Address: 0x464210 - 0x4644a8
void sub_00464210_0x464210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464210_0x464210");
#endif

    switch (ctx->pc) {
        case 0x464254u: goto label_464254;
        case 0x46425cu: goto label_46425c;
        case 0x464270u: goto label_464270;
        case 0x46428cu: goto label_46428c;
        case 0x4642d8u: goto label_4642d8;
        case 0x4642f8u: goto label_4642f8;
        case 0x464318u: goto label_464318;
        case 0x464344u: goto label_464344;
        case 0x464368u: goto label_464368;
        case 0x464384u: goto label_464384;
        case 0x4643a4u: goto label_4643a4;
        case 0x4643c4u: goto label_4643c4;
        case 0x4643fcu: goto label_4643fc;
        case 0x464418u: goto label_464418;
        case 0x464438u: goto label_464438;
        case 0x464458u: goto label_464458;
        default: break;
    }

    ctx->pc = 0x464210u;

    // 0x464210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x464210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x464214: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x464214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x464218: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x464218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x46421c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464220: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x464220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x464224: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x464224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x464228: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x464228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x46422c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46422cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464230: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x464230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x464234: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x464234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x464238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x464238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46423c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x46423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x464240: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x464240u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x464244: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464248: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x464248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x46424c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46424Cu;
    SET_GPR_U32(ctx, 31, 0x464254u);
    ctx->pc = 0x464250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46424Cu;
    // 0x464250: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46424Cu, 0x464254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464254u;
label_464254:
    // 0x464254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x464254u;
    {
        const bool branch_taken_0x464254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x464258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464254u;
        // 0x464258: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464254) {
            ctx->pc = 0x464264u;
            goto label_464264;
        }
    }
    ctx->pc = 0x46425Cu;
label_46425c:
    // 0x46425c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x46425Cu;
    {
        const bool branch_taken_0x46425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46425Cu;
        // 0x464260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46425c) {
            ctx->pc = 0x464484u;
            goto label_464484;
        }
    }
    ctx->pc = 0x464264u;
label_464264:
    // 0x464264: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x464264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x464268: 0x148180  sll         $s0, $s4, 6
    ctx->pc = 0x464268u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x46426c: 0x0  nop
    ctx->pc = 0x46426cu;
    // NOP
label_464270:
    // 0x464270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464274: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x464274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x464278: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x464278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46427c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x46427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x464280: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464284: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x464284u;
    SET_GPR_U32(ctx, 31, 0x46428Cu);
    ctx->pc = 0x464288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464284u;
    // 0x464288: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x464284u, 0x46428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46428Cu;
label_46428c:
    // 0x46428c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x46428Cu;
    {
        const bool branch_taken_0x46428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46428Cu;
        // 0x464290: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46428c) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x464294u;
    // 0x464294: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x464294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x464298: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x464298u;
    {
        const bool branch_taken_0x464298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464298u;
        // 0x46429c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464298) {
            ctx->pc = 0x46446Cu;
            goto label_46446c;
        }
    }
    ctx->pc = 0x4642A0u;
    // 0x4642a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4642a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4642a4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4642a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4642a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4642a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4642ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4642acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4642b0: 0x800008  jr          $a0
    ctx->pc = 0x4642B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4642B8u: goto label_4642b8;
            case 0x464354u: goto label_464354;
            case 0x4643E0u: goto label_4643e0;
            case 0x46446Cu: goto label_46446c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4642B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4642B8u;
label_4642b8:
    // 0x4642b8: 0x2709021  addu        $s2, $s3, $s0
    ctx->pc = 0x4642b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4642bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4642bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4642c0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x4642c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4642c4: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x4642c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4642c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4642c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4642cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4642ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4642d0: 0xc11ef3c  jal         func_47BCF0
    ctx->pc = 0x4642D0u;
    SET_GPR_U32(ctx, 31, 0x4642D8u);
    ctx->pc = 0x4642D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4642D0u;
    // 0x4642d4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BCF0u, 0x4642D0u, 0x4642D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4642D8u;
label_4642d8:
    // 0x4642d8: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4642D8u;
    {
        const bool branch_taken_0x4642d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4642DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4642D8u;
        // 0x4642dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4642d8) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x4642E0u;
    // 0x4642e0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x4642e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4642e4: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x4642e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x4642e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4642e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4642ec: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4642ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4642f0: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4642F0u;
    SET_GPR_U32(ctx, 31, 0x4642F8u);
    ctx->pc = 0x4642F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4642F0u;
    // 0x4642f4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4642F0u, 0x4642F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4642F8u;
label_4642f8:
    // 0x4642f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4642F8u;
    {
        const bool branch_taken_0x4642f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4642FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4642F8u;
        // 0x4642fc: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4642f8) {
            ctx->pc = 0x464308u;
            goto label_464308;
        }
    }
    ctx->pc = 0x464300u;
    // 0x464300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x464300u;
    {
        const bool branch_taken_0x464300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464300u;
        // 0x464304: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464300) {
            ctx->pc = 0x464324u;
            goto label_464324;
        }
    }
    ctx->pc = 0x464308u;
label_464308:
    // 0x464308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x464308u;
    {
        const bool branch_taken_0x464308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464308u;
        // 0x46430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464308) {
            ctx->pc = 0x464320u;
            goto label_464320;
        }
    }
    ctx->pc = 0x464310u;
    // 0x464310: 0xc120364  jal         func_480D90
    ctx->pc = 0x464310u;
    SET_GPR_U32(ctx, 31, 0x464318u);
    ctx->pc = 0x464314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464310u;
    // 0x464314: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D90u, 0x464310u, 0x464318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464318u;
label_464318:
    // 0x464318: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x464318u;
    {
        const bool branch_taken_0x464318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464318u;
        // 0x46431c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464318) {
            ctx->pc = 0x464324u;
            goto label_464324;
        }
    }
    ctx->pc = 0x464320u;
label_464320:
    // 0x464320: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x464320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464324:
    // 0x464324: 0x1060ffcd  beqz        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x464324u;
    {
        const bool branch_taken_0x464324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x464328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464324u;
        // 0x464328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464324) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x46432Cu;
    // 0x46432c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x46432cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x464330: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x464330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x464334: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464338: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x464338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46433c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46433Cu;
    SET_GPR_U32(ctx, 31, 0x464344u);
    ctx->pc = 0x464340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46433Cu;
    // 0x464340: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46433Cu, 0x464344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464344u;
label_464344:
    // 0x464344: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x464344u;
    {
        const bool branch_taken_0x464344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464344u;
        // 0x464348: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464344) {
            ctx->pc = 0x4643ACu;
            goto label_4643ac;
        }
    }
    ctx->pc = 0x46434Cu;
    // 0x46434c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x46434Cu;
    {
        const bool branch_taken_0x46434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46434c) {
            ctx->pc = 0x4643B4u;
            goto label_4643b4;
        }
    }
    ctx->pc = 0x464354u;
label_464354:
    // 0x464354: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x464354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x464358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46435c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x46435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x464360: 0xc11ef3c  jal         func_47BCF0
    ctx->pc = 0x464360u;
    SET_GPR_U32(ctx, 31, 0x464368u);
    ctx->pc = 0x464364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464360u;
    // 0x464364: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BCF0u, 0x464360u, 0x464368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464368u;
label_464368:
    // 0x464368: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x464368u;
    {
        const bool branch_taken_0x464368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464368u;
        // 0x46436c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464368) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x464370u;
    // 0x464370: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x464370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x464374: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x464374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464378: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46437c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46437Cu;
    SET_GPR_U32(ctx, 31, 0x464384u);
    ctx->pc = 0x464380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46437Cu;
    // 0x464380: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46437Cu, 0x464384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464384u;
label_464384:
    // 0x464384: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x464384u;
    {
        const bool branch_taken_0x464384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464384u;
        // 0x464388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464384) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x46438Cu;
    // 0x46438c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x46438cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x464390: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x464390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x464394: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464398: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x464398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46439c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46439Cu;
    SET_GPR_U32(ctx, 31, 0x4643A4u);
    ctx->pc = 0x4643A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46439Cu;
    // 0x4643a0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46439Cu, 0x4643A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4643A4u;
label_4643a4:
    // 0x4643a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4643A4u;
    {
        const bool branch_taken_0x4643a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4643A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643A4u;
        // 0x4643a8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643a4) {
            ctx->pc = 0x4643B4u;
            goto label_4643b4;
        }
    }
    ctx->pc = 0x4643ACu;
label_4643ac:
    // 0x4643ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4643ACu;
    {
        const bool branch_taken_0x4643ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4643B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643ACu;
        // 0x4643b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643ac) {
            ctx->pc = 0x4643D0u;
            goto label_4643d0;
        }
    }
    ctx->pc = 0x4643B4u;
label_4643b4:
    // 0x4643b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4643B4u;
    {
        const bool branch_taken_0x4643b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4643B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643B4u;
        // 0x4643b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643b4) {
            ctx->pc = 0x4643CCu;
            goto label_4643cc;
        }
    }
    ctx->pc = 0x4643BCu;
    // 0x4643bc: 0xc120364  jal         func_480D90
    ctx->pc = 0x4643BCu;
    SET_GPR_U32(ctx, 31, 0x4643C4u);
    ctx->pc = 0x4643C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4643BCu;
    // 0x4643c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D90u, 0x4643BCu, 0x4643C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4643C4u;
label_4643c4:
    // 0x4643c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4643C4u;
    {
        const bool branch_taken_0x4643c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4643C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643C4u;
        // 0x4643c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643c4) {
            ctx->pc = 0x4643D0u;
            goto label_4643d0;
        }
    }
    ctx->pc = 0x4643CCu;
label_4643cc:
    // 0x4643cc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4643ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4643d0:
    // 0x4643d0: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4643D0u;
    {
        const bool branch_taken_0x4643d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4643D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643D0u;
        // 0x4643d4: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643d0) {
            ctx->pc = 0x464470u;
            goto label_464470;
        }
    }
    ctx->pc = 0x4643D8u;
    // 0x4643d8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4643D8u;
    {
        const bool branch_taken_0x4643d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4643DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643D8u;
        // 0x4643dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643d8) {
            ctx->pc = 0x464484u;
            goto label_464484;
        }
    }
    ctx->pc = 0x4643E0u;
label_4643e0:
    // 0x4643e0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4643e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4643e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4643e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4643e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4643e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4643ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4643ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4643f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4643f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4643f4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4643F4u;
    SET_GPR_U32(ctx, 31, 0x4643FCu);
    ctx->pc = 0x4643F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4643F4u;
    // 0x4643f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4643F4u, 0x4643FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4643FCu;
label_4643fc:
    // 0x4643fc: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x4643FCu;
    {
        const bool branch_taken_0x4643fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4643FCu;
        // 0x464400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4643fc) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x464404u;
    // 0x464404: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x464404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x464408: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x464408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46440c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464410: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x464410u;
    SET_GPR_U32(ctx, 31, 0x464418u);
    ctx->pc = 0x464414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464410u;
    // 0x464414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x464410u, 0x464418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464418u;
label_464418:
    // 0x464418: 0x1040ff90  beqz        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x464418u;
    {
        const bool branch_taken_0x464418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464418u;
        // 0x46441c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464418) {
            ctx->pc = 0x46425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46425c;
        }
    }
    ctx->pc = 0x464420u;
    // 0x464420: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x464420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464424: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x464424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x464428: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46442c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x46442cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x464430: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x464430u;
    SET_GPR_U32(ctx, 31, 0x464438u);
    ctx->pc = 0x464434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464430u;
    // 0x464434: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x464430u, 0x464438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464438u;
label_464438:
    // 0x464438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x464438u;
    {
        const bool branch_taken_0x464438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464438u;
        // 0x46443c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464438) {
            ctx->pc = 0x464448u;
            goto label_464448;
        }
    }
    ctx->pc = 0x464440u;
    // 0x464440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x464440u;
    {
        const bool branch_taken_0x464440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464440u;
        // 0x464444: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464440) {
            ctx->pc = 0x464464u;
            goto label_464464;
        }
    }
    ctx->pc = 0x464448u;
label_464448:
    // 0x464448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x464448u;
    {
        const bool branch_taken_0x464448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464448u;
        // 0x46444c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464448) {
            ctx->pc = 0x464460u;
            goto label_464460;
        }
    }
    ctx->pc = 0x464450u;
    // 0x464450: 0xc120364  jal         func_480D90
    ctx->pc = 0x464450u;
    SET_GPR_U32(ctx, 31, 0x464458u);
    ctx->pc = 0x464454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464450u;
    // 0x464454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D90u, 0x464450u, 0x464458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464458u;
label_464458:
    // 0x464458: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x464458u;
    {
        const bool branch_taken_0x464458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464458u;
        // 0x46445c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464458) {
            ctx->pc = 0x464464u;
            goto label_464464;
        }
    }
    ctx->pc = 0x464460u;
label_464460:
    // 0x464460: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x464460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464464:
    // 0x464464: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x464464u;
    {
        const bool branch_taken_0x464464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x464468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464464u;
        // 0x464468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464464) {
            ctx->pc = 0x464484u;
            goto label_464484;
        }
    }
    ctx->pc = 0x46446Cu;
label_46446c:
    // 0x46446c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x46446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_464470:
    // 0x464470: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x464470u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x464474: 0x2e830002  sltiu       $v1, $s4, 0x2
    ctx->pc = 0x464474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x464478: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x464478u;
    {
        const bool branch_taken_0x464478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464478u;
        // 0x46447c: 0x148180  sll         $s0, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464478) {
            ctx->pc = 0x464270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464270;
        }
    }
    ctx->pc = 0x464480u;
    // 0x464480: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x464480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464484:
    // 0x464484: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x464484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x464488: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x464488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46448c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x46448cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464490: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x464490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464494: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x464494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464498: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x464498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46449c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4644a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4644A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4644A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4644A0u;
        // 0x4644a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4644A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4644A8u;
}
