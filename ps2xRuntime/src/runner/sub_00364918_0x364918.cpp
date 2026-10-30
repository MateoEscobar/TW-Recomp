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

// Function: sub_00364918
// Address: 0x364918 - 0x364a70
void sub_00364918_0x364918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364918_0x364918");
#endif

    switch (ctx->pc) {
        case 0x364950u: goto label_364950;
        case 0x364958u: goto label_364958;
        case 0x36496cu: goto label_36496c;
        case 0x364974u: goto label_364974;
        case 0x364988u: goto label_364988;
        case 0x364990u: goto label_364990;
        case 0x3649a8u: goto label_3649a8;
        case 0x3649b0u: goto label_3649b0;
        case 0x3649c0u: goto label_3649c0;
        case 0x3649d8u: goto label_3649d8;
        case 0x3649e0u: goto label_3649e0;
        case 0x364a08u: goto label_364a08;
        case 0x364a10u: goto label_364a10;
        case 0x364a20u: goto label_364a20;
        case 0x364a34u: goto label_364a34;
        default: break;
    }

    ctx->pc = 0x364918u;

    // 0x364918: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x364918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36491c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36491cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364920: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x364920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x364924: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x364924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x364928: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36492c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36492cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364930: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x364930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x364934: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x364934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x364938: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x364938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x36493c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x36493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x364940: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x364940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x364944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x364948: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364948u;
    SET_GPR_U32(ctx, 31, 0x364950u);
    ctx->pc = 0x36494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364948u;
    // 0x36494c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364948u, 0x364950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364950u;
label_364950:
    // 0x364950: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364950u;
    SET_GPR_U32(ctx, 31, 0x364958u);
    ctx->pc = 0x364954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364950u;
    // 0x364954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364950u, 0x364958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364958u;
label_364958:
    // 0x364958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36495c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364964: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364964u;
    SET_GPR_U32(ctx, 31, 0x36496Cu);
    ctx->pc = 0x364968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364964u;
    // 0x364968: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364964u, 0x36496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36496Cu;
label_36496c:
    // 0x36496c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36496Cu;
    SET_GPR_U32(ctx, 31, 0x364974u);
    ctx->pc = 0x364970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36496Cu;
    // 0x364970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36496Cu, 0x364974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364974u;
label_364974:
    // 0x364974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364978: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x364978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36497c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364980: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364980u;
    SET_GPR_U32(ctx, 31, 0x364988u);
    ctx->pc = 0x364984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364980u;
    // 0x364984: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364980u, 0x364988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364988u;
label_364988:
    // 0x364988: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x364988u;
    SET_GPR_U32(ctx, 31, 0x364990u);
    ctx->pc = 0x36498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364988u;
    // 0x36498c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x364988u, 0x364990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364990u;
label_364990:
    // 0x364990: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x364990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x364994: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x364994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364998: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x364998u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36499c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3649A0u;
    SET_GPR_U32(ctx, 31, 0x3649A8u);
    ctx->pc = 0x3649A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649A0u;
    // 0x3649a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3649A0u, 0x3649A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649A8u;
label_3649a8:
    // 0x3649a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3649A8u;
    SET_GPR_U32(ctx, 31, 0x3649B0u);
    ctx->pc = 0x3649ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649A8u;
    // 0x3649ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3649A8u, 0x3649B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649B0u;
label_3649b0:
    // 0x3649b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3649b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3649b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649b8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3649b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649bc: 0x0  nop
    ctx->pc = 0x3649bcu;
    // NOP
label_3649c0:
    // 0x3649c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3649c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3649c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3649c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3649c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3649cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3649ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649d0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3649D0u;
    SET_GPR_U32(ctx, 31, 0x3649D8u);
    ctx->pc = 0x3649D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649D0u;
    // 0x3649d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3649D0u, 0x3649D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649D8u;
label_3649d8:
    // 0x3649d8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3649D8u;
    SET_GPR_U32(ctx, 31, 0x3649E0u);
    ctx->pc = 0x3649DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649D8u;
    // 0x3649dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3649D8u, 0x3649E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649E0u;
label_3649e0:
    // 0x3649e0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3649e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3649e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3649e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3649e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3649E8u;
    {
        const bool branch_taken_0x3649e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3649ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3649E8u;
        // 0x3649ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3649e8) {
            ctx->pc = 0x3649C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3649c0;
        }
    }
    ctx->pc = 0x3649F0u;
    // 0x3649f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3649f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3649f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3649f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3649fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3649fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a00: 0xc0bee46  jal         func_2FB918
    ctx->pc = 0x364A00u;
    SET_GPR_U32(ctx, 31, 0x364A08u);
    ctx->pc = 0x364A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A00u;
    // 0x364a04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB918u, 0x364A00u, 0x364A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A08u;
label_364a08:
    // 0x364a08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x364a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_364a10:
    // 0x364a10: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x364a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x364a14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x364a18: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x364A18u;
    SET_GPR_U32(ctx, 31, 0x364A20u);
    ctx->pc = 0x364A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A18u;
    // 0x364a1c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x364A18u, 0x364A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A20u;
label_364a20:
    // 0x364a20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x364a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364a2c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x364A2Cu;
    SET_GPR_U32(ctx, 31, 0x364A34u);
    ctx->pc = 0x364A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A2Cu;
    // 0x364a30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x364A2Cu, 0x364A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A34u;
label_364a34:
    // 0x364a34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x364a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364a38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364A38u;
    {
        const bool branch_taken_0x364a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A38u;
        // 0x364a3c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a38) {
            ctx->pc = 0x364A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364a10;
        }
    }
    ctx->pc = 0x364A40u;
    // 0x364a40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x364a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x364a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x364a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x364a4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x364a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x364a50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x364a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364a54: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x364a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364a58: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x364a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364a5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364a60: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x364a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x364a64: 0x3e00008  jr          $ra
    ctx->pc = 0x364A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A64u;
        // 0x364a68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364A6Cu;
    // 0x364a6c: 0x0  nop
    ctx->pc = 0x364a6cu;
    // NOP
    ctx->pc = 0x364a70u;
}
