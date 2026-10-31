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

// Function: sub_00233890
// Address: 0x233890 - 0x233aec
void sub_00233890_0x233890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233890_0x233890");
#endif

    switch (ctx->pc) {
        case 0x2338c4u: goto label_2338c4;
        case 0x2338e0u: goto label_2338e0;
        case 0x23391cu: goto label_23391c;
        case 0x233938u: goto label_233938;
        case 0x233954u: goto label_233954;
        case 0x233970u: goto label_233970;
        case 0x23398cu: goto label_23398c;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339c4u: goto label_2339c4;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a28u: goto label_233a28;
        case 0x233a44u: goto label_233a44;
        case 0x233a54u: goto label_233a54;
        default: break;
    }

    ctx->pc = 0x233890u;

    // 0x233890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x233894: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x233894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x233898: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x233898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x23389c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2338a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2338a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2338a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2338a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338ac: 0x1240008f  beqz        $s2, . + 4 + (0x8F << 2)
    ctx->pc = 0x2338ACu;
    {
        const bool branch_taken_0x2338ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338ACu;
        // 0x2338b0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338ac) {
            ctx->pc = 0x233AECu;
            return;
        }
    }
    ctx->pc = 0x2338B4u;
    // 0x2338b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2338b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2338b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338bc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x2338BCu;
    SET_GPR_U32(ctx, 31, 0x2338C4u);
    ctx->pc = 0x2338C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338BCu;
    // 0x2338c0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2338BCu, 0x2338C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338C4u;
label_2338c4:
    // 0x2338c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2338c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2338c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2338c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2338cc: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x2338ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2338d0: 0x24a5c400  addiu       $a1, $a1, -0x3C00
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    // 0x2338d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2338d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338d8: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x2338D8u;
    SET_GPR_U32(ctx, 31, 0x2338E0u);
    ctx->pc = 0x2338DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338D8u;
    // 0x2338dc: 0x84460328  lh          $a2, 0x328($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2338D8u, 0x2338E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338E0u;
label_2338e0:
    // 0x2338e0: 0x1600003b  bnez        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2338E0u;
    {
        const bool branch_taken_0x2338e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338E0u;
        // 0x2338e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338e0) {
            ctx->pc = 0x2339D0u;
            goto label_2339d0;
        }
    }
    ctx->pc = 0x2338E8u;
    // 0x2338e8: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x2338e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2338ec: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2338ECu;
    {
        const bool branch_taken_0x2338ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338ECu;
        // 0x2338f0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338ec) {
            ctx->pc = 0x233AECu;
            return;
        }
    }
    ctx->pc = 0x2338F4u;
    // 0x2338f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2338f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2338f8: 0x2442c4b0  addiu       $v0, $v0, -0x3B50
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952112));
    // 0x2338fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233900: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233904: 0x800008  jr          $a0
    ctx->pc = 0x233904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23390Cu: goto label_23390c;
            case 0x233928u: goto label_233928;
            case 0x233944u: goto label_233944;
            case 0x233960u: goto label_233960;
            case 0x23397Cu: goto label_23397c;
            case 0x233998u: goto label_233998;
            case 0x2339B4u: goto label_2339b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233904u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23390Cu;
label_23390c:
    // 0x23390c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x23390cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233914: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233914u;
    SET_GPR_U32(ctx, 31, 0x23391Cu);
    ctx->pc = 0x233918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233914u;
    // 0x233918: 0x24a5c420  addiu       $a1, $a1, -0x3BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233914u, 0x23391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23391Cu;
label_23391c:
    // 0x23391c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233920: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x233920u;
    {
        const bool branch_taken_0x233920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233920u;
        // 0x233924: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233920) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233928u;
label_233928:
    // 0x233928: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x23392c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233930: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233930u;
    SET_GPR_U32(ctx, 31, 0x233938u);
    ctx->pc = 0x233934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233930u;
    // 0x233934: 0x24a5c430  addiu       $a1, $a1, -0x3BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233930u, 0x233938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233938u;
label_233938:
    // 0x233938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23393c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x23393Cu;
    {
        const bool branch_taken_0x23393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23393Cu;
        // 0x233940: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23393c) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233944u;
label_233944:
    // 0x233944: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23394c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x23394Cu;
    SET_GPR_U32(ctx, 31, 0x233954u);
    ctx->pc = 0x233950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23394Cu;
    // 0x233950: 0x24a5c438  addiu       $a1, $a1, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x23394Cu, 0x233954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233954u;
label_233954:
    // 0x233954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233958: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233958u;
        // 0x23395c: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233958) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233960u;
label_233960:
    // 0x233960: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233968: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233968u;
    SET_GPR_U32(ctx, 31, 0x233970u);
    ctx->pc = 0x23396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233968u;
    // 0x23396c: 0x24a5c448  addiu       $a1, $a1, -0x3BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233968u, 0x233970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233970u;
label_233970:
    // 0x233970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233974: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x233974u;
    {
        const bool branch_taken_0x233974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233974u;
        // 0x233978: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233974) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x23397Cu;
label_23397c:
    // 0x23397c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233984: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233984u;
    SET_GPR_U32(ctx, 31, 0x23398Cu);
    ctx->pc = 0x233988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233984u;
    // 0x233988: 0x24a5c450  addiu       $a1, $a1, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233984u, 0x23398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23398Cu;
label_23398c:
    // 0x23398c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233990: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x233990u;
    {
        const bool branch_taken_0x233990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233990u;
        // 0x233994: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233990) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233998u;
label_233998:
    // 0x233998: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x23399c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339a0: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x2339A0u;
    SET_GPR_U32(ctx, 31, 0x2339A8u);
    ctx->pc = 0x2339A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339A0u;
    // 0x2339a4: 0x24a5c460  addiu       $a1, $a1, -0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x2339A0u, 0x2339A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339A8u;
label_2339a8:
    // 0x2339a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2339a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339ac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2339ACu;
    {
        const bool branch_taken_0x2339ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339ACu;
        // 0x2339b0: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339ac) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x2339B4u;
label_2339b4:
    // 0x2339b4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2339b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2339b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2339b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339bc: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x2339BCu;
    SET_GPR_U32(ctx, 31, 0x2339C4u);
    ctx->pc = 0x2339C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339BCu;
    // 0x2339c0: 0x24a5c470  addiu       $a1, $a1, -0x3B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x2339BCu, 0x2339C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339C4u;
label_2339c4:
    // 0x2339c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2339c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2339C8u;
    {
        const bool branch_taken_0x2339c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339C8u;
        // 0x2339cc: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339c8) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x2339D0u;
label_2339d0:
    // 0x2339d0: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2339D0u;
    {
        const bool branch_taken_0x2339d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2339D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339D0u;
        // 0x2339d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339d0) {
            ctx->pc = 0x233A5Cu;
            goto label_233a5c;
        }
    }
    ctx->pc = 0x2339D8u;
    // 0x2339d8: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x2339d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2339dc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2339DCu;
    {
        const bool branch_taken_0x2339dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339DCu;
        // 0x2339e0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339dc) {
            ctx->pc = 0x233AECu;
            return;
        }
    }
    ctx->pc = 0x2339E4u;
    // 0x2339e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2339e8: 0x2442c4f0  addiu       $v0, $v0, -0x3B10
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952176));
    // 0x2339ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2339f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2339f4: 0x800008  jr          $a0
    ctx->pc = 0x2339F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2339FCu: goto label_2339fc;
            case 0x233A18u: goto label_233a18;
            case 0x233A34u: goto label_233a34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2339F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2339FCu;
label_2339fc:
    // 0x2339fc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233a00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a04: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233A04u;
    SET_GPR_U32(ctx, 31, 0x233A0Cu);
    ctx->pc = 0x233A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A04u;
    // 0x233a08: 0x24a5c480  addiu       $a1, $a1, -0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233A04u, 0x233A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A0Cu;
label_233a0c:
    // 0x233a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x233A10u;
    {
        const bool branch_taken_0x233a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A10u;
        // 0x233a14: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a10) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233A18u;
label_233a18:
    // 0x233a18: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233a1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a20: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233A20u;
    SET_GPR_U32(ctx, 31, 0x233A28u);
    ctx->pc = 0x233A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A20u;
    // 0x233a24: 0x24a5c490  addiu       $a1, $a1, -0x3B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233A20u, 0x233A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233A2Cu;
    {
        const bool branch_taken_0x233a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A2Cu;
        // 0x233a30: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a2c) {
            ctx->pc = 0x233A4Cu;
            goto label_233a4c;
        }
    }
    ctx->pc = 0x233A34u;
label_233a34:
    // 0x233a34: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233a38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a3c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x233A3Cu;
    SET_GPR_U32(ctx, 31, 0x233A44u);
    ctx->pc = 0x233A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A3Cu;
    // 0x233a40: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x233A3Cu, 0x233A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A44u;
label_233a44:
    // 0x233a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a48: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_233a4c:
    // 0x233a4c: 0xc087b4a  jal         func_21ED28
    ctx->pc = 0x233A4Cu;
    SET_GPR_U32(ctx, 31, 0x233A54u);
    ctx->pc = 0x233A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A4Cu;
    // 0x233a50: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED28u, 0x233A4Cu, 0x233A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x233A54u;
    {
        const bool branch_taken_0x233a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a54) {
            ctx->pc = 0x233AF0u;
            return;
        }
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x56020024  bnel        $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x233A5Cu;
    {
        const bool branch_taken_0x233a5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x233a5c) {
            ctx->pc = 0x233A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A5Cu;
            // 0x233a60: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AF0u;
            return;
        }
    }
    ctx->pc = 0x233A64u;
    // 0x233a64: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x233a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x233a68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A68u;
        // 0x233a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233A70u;
    // 0x233a70: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x233a74: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x233a78: 0x2442c530  addiu       $v0, $v0, -0x3AD0
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x233a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233a84: 0x800008  jr          $a0
    ctx->pc = 0x233A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233A8Cu: goto label_233a8c;
            case 0x233A94u: goto label_233a94;
            case 0x233A9Cu: goto label_233a9c;
            case 0x233AA4u: goto label_233aa4;
            case 0x233AACu: goto label_233aac;
            case 0x233AB4u: goto label_233ab4;
            case 0x233ABCu: goto label_233abc;
            case 0x233AC0u: goto label_233ac0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233A84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233A8Cu;
label_233a8c:
    // 0x233a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x233A8Cu;
    {
        const bool branch_taken_0x233a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A8Cu;
        // 0x233a90: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a8c) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233A94u;
label_233a94:
    // 0x233a94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x233A94u;
    {
        const bool branch_taken_0x233a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A94u;
        // 0x233a98: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a94) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233A9Cu;
label_233a9c:
    // 0x233a9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A9Cu;
        // 0x233aa0: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233AA4u;
label_233aa4:
    // 0x233aa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233AA4u;
    {
        const bool branch_taken_0x233aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AA4u;
        // 0x233aa8: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aa4) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233AACu;
label_233aac:
    // 0x233aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233AACu;
    {
        const bool branch_taken_0x233aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AACu;
        // 0x233ab0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aac) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233AB4u;
label_233ab4:
    // 0x233ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x233AB4u;
    {
        const bool branch_taken_0x233ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AB4u;
        // 0x233ab8: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ab4) {
            ctx->pc = 0x233AC0u;
            goto label_233ac0;
        }
    }
    ctx->pc = 0x233ABCu;
label_233abc:
    // 0x233abc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_233ac0:
    // 0x233ac0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x233AC0u;
    {
        const bool branch_taken_0x233ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC0u;
        // 0x233ac4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac0) {
            ctx->pc = 0x233AECu;
            return;
        }
    }
    ctx->pc = 0x233AC8u;
    // 0x233ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233acc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233ad0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x233ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x233ad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233adc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ae0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ae4: 0xc088178  jal         func_2205E0
    ctx->pc = 0x233AE4u;
    SET_GPR_U32(ctx, 31, 0x233AECu);
    ctx->pc = 0x233AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AE4u;
    // 0x233ae8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x233AE4u, 0x233AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AECu;
}
