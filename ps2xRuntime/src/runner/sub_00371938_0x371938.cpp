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

// Function: sub_00371938
// Address: 0x371938 - 0x371b18
void sub_00371938_0x371938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371938_0x371938");
#endif

    switch (ctx->pc) {
        case 0x371974u: goto label_371974;
        case 0x371988u: goto label_371988;
        case 0x371990u: goto label_371990;
        case 0x3719a4u: goto label_3719a4;
        case 0x3719acu: goto label_3719ac;
        case 0x3719c0u: goto label_3719c0;
        case 0x3719c8u: goto label_3719c8;
        case 0x3719e0u: goto label_3719e0;
        case 0x3719f8u: goto label_3719f8;
        case 0x371a00u: goto label_371a00;
        case 0x371a18u: goto label_371a18;
        case 0x371a30u: goto label_371a30;
        case 0x371a38u: goto label_371a38;
        case 0x371a64u: goto label_371a64;
        case 0x371a6cu: goto label_371a6c;
        case 0x371a78u: goto label_371a78;
        case 0x371a80u: goto label_371a80;
        case 0x371a90u: goto label_371a90;
        case 0x371aa4u: goto label_371aa4;
        case 0x371ab8u: goto label_371ab8;
        case 0x371ac8u: goto label_371ac8;
        case 0x371adcu: goto label_371adc;
        default: break;
    }

    ctx->pc = 0x371938u;

    // 0x371938: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x371938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x37193c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371940: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x371940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x371944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371948: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x371948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37194c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x37194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x371950: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x371950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x371954: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x371954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x371958: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x371958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x37195c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x37195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x371960: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x371960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x371964: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x371964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x371968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x371968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37196c: 0xc102488  jal         func_409220
    ctx->pc = 0x37196Cu;
    SET_GPR_U32(ctx, 31, 0x371974u);
    ctx->pc = 0x371970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37196Cu;
    // 0x371970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37196Cu, 0x371974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371974u;
label_371974:
    // 0x371974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371978: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37197c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371980: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371980u;
    SET_GPR_U32(ctx, 31, 0x371988u);
    ctx->pc = 0x371984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371980u;
    // 0x371984: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371980u, 0x371988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371988u;
label_371988:
    // 0x371988: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371988u;
    SET_GPR_U32(ctx, 31, 0x371990u);
    ctx->pc = 0x37198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371988u;
    // 0x37198c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371988u, 0x371990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371994: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x371994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x371998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37199c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37199Cu;
    SET_GPR_U32(ctx, 31, 0x3719A4u);
    ctx->pc = 0x3719A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37199Cu;
    // 0x3719a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37199Cu, 0x3719A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719A4u;
label_3719a4:
    // 0x3719a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3719A4u;
    SET_GPR_U32(ctx, 31, 0x3719ACu);
    ctx->pc = 0x3719A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719A4u;
    // 0x3719a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3719A4u, 0x3719ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719ACu;
label_3719ac:
    // 0x3719ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3719acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3719b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3719b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3719b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3719B8u;
    SET_GPR_U32(ctx, 31, 0x3719C0u);
    ctx->pc = 0x3719BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719B8u;
    // 0x3719bc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3719B8u, 0x3719C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719C0u;
label_3719c0:
    // 0x3719c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3719C0u;
    SET_GPR_U32(ctx, 31, 0x3719C8u);
    ctx->pc = 0x3719C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719C0u;
    // 0x3719c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3719C0u, 0x3719C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719C8u;
label_3719c8:
    // 0x3719c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3719c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3719cc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3719ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3719d0: 0x2a603  sra         $s4, $v0, 24
    ctx->pc = 0x3719d0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3719d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3719d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719d8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3719d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719dc: 0x0  nop
    ctx->pc = 0x3719dcu;
    // NOP
label_3719e0:
    // 0x3719e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3719e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3719e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3719e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3719e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3719ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719f0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3719F0u;
    SET_GPR_U32(ctx, 31, 0x3719F8u);
    ctx->pc = 0x3719F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719F0u;
    // 0x3719f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3719F0u, 0x3719F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719F8u;
label_3719f8:
    // 0x3719f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3719F8u;
    SET_GPR_U32(ctx, 31, 0x371A00u);
    ctx->pc = 0x3719FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719F8u;
    // 0x3719fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3719F8u, 0x371A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A00u;
label_371a00:
    // 0x371a00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371a04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371a08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371A08u;
    {
        const bool branch_taken_0x371a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A08u;
        // 0x371a0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a08) {
            ctx->pc = 0x3719E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3719e0;
        }
    }
    ctx->pc = 0x371A10u;
    // 0x371a10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a14: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x371a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371a18:
    // 0x371a18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x371a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a28: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371A28u;
    SET_GPR_U32(ctx, 31, 0x371A30u);
    ctx->pc = 0x371A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A28u;
    // 0x371a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371A28u, 0x371A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A30u;
label_371a30:
    // 0x371a30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371A30u;
    SET_GPR_U32(ctx, 31, 0x371A38u);
    ctx->pc = 0x371A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A30u;
    // 0x371a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371A30u, 0x371A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A38u;
label_371a38:
    // 0x371a38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x371a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x371a3c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x371a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x371a40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371A40u;
    {
        const bool branch_taken_0x371a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A40u;
        // 0x371a44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a40) {
            ctx->pc = 0x371A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371a18;
        }
    }
    ctx->pc = 0x371A48u;
    // 0x371a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x371a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a4c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x371a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a50: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x371a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a54: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x371a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x371a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a5c: 0xc044e82  jal         func_113A08
    ctx->pc = 0x371A5Cu;
    SET_GPR_U32(ctx, 31, 0x371A64u);
    ctx->pc = 0x371A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A5Cu;
    // 0x371a60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A08u, 0x371A5Cu, 0x371A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A64u;
label_371a64:
    // 0x371a64: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371A64u;
    SET_GPR_U32(ctx, 31, 0x371A6Cu);
    ctx->pc = 0x371A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A64u;
    // 0x371a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371A64u, 0x371A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A6Cu;
label_371a6c:
    // 0x371a6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a70: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371A70u;
    SET_GPR_U32(ctx, 31, 0x371A78u);
    ctx->pc = 0x371A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A70u;
    // 0x371a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371A70u, 0x371A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A78u;
label_371a78:
    // 0x371a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x371a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_371a80:
    // 0x371a80: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x371a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x371a84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371a88: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371A88u;
    SET_GPR_U32(ctx, 31, 0x371A90u);
    ctx->pc = 0x371A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A88u;
    // 0x371a8c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371A88u, 0x371A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A90u;
label_371a90:
    // 0x371a90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371a9c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371A9Cu;
    SET_GPR_U32(ctx, 31, 0x371AA4u);
    ctx->pc = 0x371AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A9Cu;
    // 0x371aa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371A9Cu, 0x371AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AA4u;
label_371aa4:
    // 0x371aa4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371aa8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371AA8u;
    {
        const bool branch_taken_0x371aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AA8u;
        // 0x371aac: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371aa8) {
            ctx->pc = 0x371A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371a80;
        }
    }
    ctx->pc = 0x371AB0u;
    // 0x371ab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ab4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_371ab8:
    // 0x371ab8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x371ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x371abc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371ac0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371AC0u;
    SET_GPR_U32(ctx, 31, 0x371AC8u);
    ctx->pc = 0x371AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371AC0u;
    // 0x371ac4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371AC0u, 0x371AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AC8u;
label_371ac8:
    // 0x371ac8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ad0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x371ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371ad4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371AD4u;
    SET_GPR_U32(ctx, 31, 0x371ADCu);
    ctx->pc = 0x371AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371AD4u;
    // 0x371ad8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371AD4u, 0x371ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371ADCu;
label_371adc:
    // 0x371adc: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x371adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x371ae0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371AE0u;
    {
        const bool branch_taken_0x371ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AE0u;
        // 0x371ae4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ae0) {
            ctx->pc = 0x371AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371ab8;
        }
    }
    ctx->pc = 0x371AE8u;
    // 0x371ae8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x371ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x371aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371af0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x371af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x371af4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x371af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x371af8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x371af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x371afc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x371afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371b00: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x371b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371b04: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x371b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371b08: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x371b08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x371b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371b10: 0x3e00008  jr          $ra
    ctx->pc = 0x371B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B10u;
        // 0x371b14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371B18u;
}
