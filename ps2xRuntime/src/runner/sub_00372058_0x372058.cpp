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

// Function: sub_00372058
// Address: 0x372058 - 0x372350
void sub_00372058_0x372058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372058_0x372058");
#endif

    switch (ctx->pc) {
        case 0x372094u: goto label_372094;
        case 0x3720a8u: goto label_3720a8;
        case 0x3720b0u: goto label_3720b0;
        case 0x3720d0u: goto label_3720d0;
        case 0x3720e8u: goto label_3720e8;
        case 0x3720f0u: goto label_3720f0;
        case 0x372108u: goto label_372108;
        case 0x372120u: goto label_372120;
        case 0x372128u: goto label_372128;
        case 0x372140u: goto label_372140;
        case 0x372158u: goto label_372158;
        case 0x372160u: goto label_372160;
        case 0x372178u: goto label_372178;
        case 0x372190u: goto label_372190;
        case 0x372198u: goto label_372198;
        case 0x3721b0u: goto label_3721b0;
        case 0x3721c8u: goto label_3721c8;
        case 0x3721d0u: goto label_3721d0;
        case 0x372200u: goto label_372200;
        case 0x372208u: goto label_372208;
        case 0x372218u: goto label_372218;
        case 0x37222cu: goto label_37222c;
        case 0x372240u: goto label_372240;
        case 0x372250u: goto label_372250;
        case 0x372264u: goto label_372264;
        case 0x372278u: goto label_372278;
        case 0x372288u: goto label_372288;
        case 0x37229cu: goto label_37229c;
        case 0x3722b0u: goto label_3722b0;
        case 0x3722c0u: goto label_3722c0;
        case 0x3722d4u: goto label_3722d4;
        case 0x3722e8u: goto label_3722e8;
        case 0x3722f8u: goto label_3722f8;
        case 0x37230cu: goto label_37230c;
        default: break;
    }

    ctx->pc = 0x372058u;

    // 0x372058: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x372058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x37205c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372060: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x372060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x372064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372068: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x372068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x37206c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x37206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x372070: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x372070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x372074: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x372074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x372078: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x372078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x37207c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x37207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x372080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x372080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x372084: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x372084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x372088: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x372088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x37208c: 0xc102488  jal         func_409220
    ctx->pc = 0x37208Cu;
    SET_GPR_U32(ctx, 31, 0x372094u);
    ctx->pc = 0x372090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37208Cu;
    // 0x372090: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37208Cu, 0x372094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372094u;
label_372094:
    // 0x372094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372098: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x372098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37209c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37209cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3720A0u;
    SET_GPR_U32(ctx, 31, 0x3720A8u);
    ctx->pc = 0x3720A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3720A0u;
    // 0x3720a4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3720A0u, 0x3720A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720A8u;
label_3720a8:
    // 0x3720a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3720A8u;
    SET_GPR_U32(ctx, 31, 0x3720B0u);
    ctx->pc = 0x3720ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3720A8u;
    // 0x3720ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3720A8u, 0x3720B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720B0u;
label_3720b0:
    // 0x3720b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3720b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720b4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3720b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3720b8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3720b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3720bc: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3720bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3720c0: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x3720c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3720c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3720c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720c8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3720c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720cc: 0x0  nop
    ctx->pc = 0x3720ccu;
    // NOP
label_3720d0:
    // 0x3720d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3720d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3720d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3720d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3720d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3720dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3720dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720e0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3720E0u;
    SET_GPR_U32(ctx, 31, 0x3720E8u);
    ctx->pc = 0x3720E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3720E0u;
    // 0x3720e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3720E0u, 0x3720E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720E8u;
label_3720e8:
    // 0x3720e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3720E8u;
    SET_GPR_U32(ctx, 31, 0x3720F0u);
    ctx->pc = 0x3720ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3720E8u;
    // 0x3720ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3720E8u, 0x3720F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720F0u;
label_3720f0:
    // 0x3720f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3720f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3720f4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3720f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3720f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3720F8u;
    {
        const bool branch_taken_0x3720f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3720FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720F8u;
        // 0x3720fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720f8) {
            ctx->pc = 0x3720D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3720d0;
        }
    }
    ctx->pc = 0x372100u;
    // 0x372100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372104: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x372104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372108:
    // 0x372108: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37210c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372110: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372118: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x372118u;
    SET_GPR_U32(ctx, 31, 0x372120u);
    ctx->pc = 0x37211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372118u;
    // 0x37211c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x372118u, 0x372120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372120u;
label_372120:
    // 0x372120: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372120u;
    SET_GPR_U32(ctx, 31, 0x372128u);
    ctx->pc = 0x372124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372120u;
    // 0x372124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372120u, 0x372128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372128u;
label_372128:
    // 0x372128: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x372128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37212c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37212cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372130u;
    {
        const bool branch_taken_0x372130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372130u;
        // 0x372134: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372130) {
            ctx->pc = 0x372108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372108;
        }
    }
    ctx->pc = 0x372138u;
    // 0x372138: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37213c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x37213cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_372140:
    // 0x372140: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372148: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x372148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37214c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37214cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372150: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x372150u;
    SET_GPR_U32(ctx, 31, 0x372158u);
    ctx->pc = 0x372154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372150u;
    // 0x372154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x372150u, 0x372158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372158u;
label_372158:
    // 0x372158: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372158u;
    SET_GPR_U32(ctx, 31, 0x372160u);
    ctx->pc = 0x37215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372158u;
    // 0x37215c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372158u, 0x372160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372160u;
label_372160:
    // 0x372160: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x372160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x372164: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x372164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372168: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372168u;
    {
        const bool branch_taken_0x372168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372168u;
        // 0x37216c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372168) {
            ctx->pc = 0x372140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372140;
        }
    }
    ctx->pc = 0x372170u;
    // 0x372170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372174: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x372174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_372178:
    // 0x372178: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37217c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372180: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x372180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x372184: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372188: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x372188u;
    SET_GPR_U32(ctx, 31, 0x372190u);
    ctx->pc = 0x37218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372188u;
    // 0x37218c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x372188u, 0x372190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372190u;
label_372190:
    // 0x372190: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372190u;
    SET_GPR_U32(ctx, 31, 0x372198u);
    ctx->pc = 0x372194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372190u;
    // 0x372194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372190u, 0x372198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372198u;
label_372198:
    // 0x372198: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x372198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37219c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37219cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3721a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3721A0u;
    {
        const bool branch_taken_0x3721a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3721A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721A0u;
        // 0x3721a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721a0) {
            ctx->pc = 0x372178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372178;
        }
    }
    ctx->pc = 0x3721A8u;
    // 0x3721a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3721a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721ac: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3721acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3721b0:
    // 0x3721b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3721b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3721b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3721b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3721b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3721bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3721bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721c0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3721C0u;
    SET_GPR_U32(ctx, 31, 0x3721C8u);
    ctx->pc = 0x3721C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3721C0u;
    // 0x3721c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3721C0u, 0x3721C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3721C8u;
label_3721c8:
    // 0x3721c8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3721C8u;
    SET_GPR_U32(ctx, 31, 0x3721D0u);
    ctx->pc = 0x3721CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3721C8u;
    // 0x3721cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3721C8u, 0x3721D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3721D0u;
label_3721d0:
    // 0x3721d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3721d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3721d4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3721d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3721d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3721D8u;
    {
        const bool branch_taken_0x3721d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3721DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721D8u;
        // 0x3721dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721d8) {
            ctx->pc = 0x3721B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3721b0;
        }
    }
    ctx->pc = 0x3721E0u;
    // 0x3721e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3721e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721e4: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3721e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3721e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3721ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3721f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721f4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3721f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721f8: 0xc044e96  jal         func_113A58
    ctx->pc = 0x3721F8u;
    SET_GPR_U32(ctx, 31, 0x372200u);
    ctx->pc = 0x3721FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3721F8u;
    // 0x3721fc: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A58u, 0x3721F8u, 0x372200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372200u;
label_372200:
    // 0x372200: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372204: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x372204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_372208:
    // 0x372208: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x372208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37220c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37220cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372210: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x372210u;
    SET_GPR_U32(ctx, 31, 0x372218u);
    ctx->pc = 0x372214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372210u;
    // 0x372214: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x372210u, 0x372218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372218u;
label_372218:
    // 0x372218: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x372218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37221c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372220: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372224: 0xc102576  jal         func_4095D8
    ctx->pc = 0x372224u;
    SET_GPR_U32(ctx, 31, 0x37222Cu);
    ctx->pc = 0x372228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372224u;
    // 0x372228: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x372224u, 0x37222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37222Cu;
label_37222c:
    // 0x37222c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37222cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372230: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372230u;
    {
        const bool branch_taken_0x372230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372230u;
        // 0x372234: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372230) {
            ctx->pc = 0x372208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372208;
        }
    }
    ctx->pc = 0x372238u;
    // 0x372238: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37223c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37223cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_372240:
    // 0x372240: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x372240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x372244: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372248: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x372248u;
    SET_GPR_U32(ctx, 31, 0x372250u);
    ctx->pc = 0x37224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372248u;
    // 0x37224c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x372248u, 0x372250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372250u;
label_372250:
    // 0x372250: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x372250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372258: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37225c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37225Cu;
    SET_GPR_U32(ctx, 31, 0x372264u);
    ctx->pc = 0x372260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37225Cu;
    // 0x372260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37225Cu, 0x372264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372264u;
label_372264:
    // 0x372264: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x372264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372268: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372268u;
    {
        const bool branch_taken_0x372268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372268u;
        // 0x37226c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372268) {
            ctx->pc = 0x372240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372240;
        }
    }
    ctx->pc = 0x372270u;
    // 0x372270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372274: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x372274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_372278:
    // 0x372278: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x372278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37227c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37227cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372280: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x372280u;
    SET_GPR_U32(ctx, 31, 0x372288u);
    ctx->pc = 0x372284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372280u;
    // 0x372284: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x372280u, 0x372288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372288u;
label_372288:
    // 0x372288: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x372288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37228c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372290: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x372290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372294: 0xc102576  jal         func_4095D8
    ctx->pc = 0x372294u;
    SET_GPR_U32(ctx, 31, 0x37229Cu);
    ctx->pc = 0x372298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372294u;
    // 0x372298: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x372294u, 0x37229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37229Cu;
label_37229c:
    // 0x37229c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37229cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3722a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3722A0u;
    {
        const bool branch_taken_0x3722a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722A0u;
        // 0x3722a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722a0) {
            ctx->pc = 0x372278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372278;
        }
    }
    ctx->pc = 0x3722A8u;
    // 0x3722a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3722a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3722acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3722b0:
    // 0x3722b0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3722b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3722b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3722b8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3722B8u;
    SET_GPR_U32(ctx, 31, 0x3722C0u);
    ctx->pc = 0x3722BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3722B8u;
    // 0x3722bc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3722B8u, 0x3722C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3722C0u;
label_3722c0:
    // 0x3722c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3722c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3722c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3722c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3722cc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3722CCu;
    SET_GPR_U32(ctx, 31, 0x3722D4u);
    ctx->pc = 0x3722D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3722CCu;
    // 0x3722d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3722CCu, 0x3722D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3722D4u;
label_3722d4:
    // 0x3722d4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3722d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3722d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3722D8u;
    {
        const bool branch_taken_0x3722d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722D8u;
        // 0x3722dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722d8) {
            ctx->pc = 0x3722B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3722b0;
        }
    }
    ctx->pc = 0x3722E0u;
    // 0x3722e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3722e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3722e8:
    // 0x3722e8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x3722ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3722ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3722f0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3722F0u;
    SET_GPR_U32(ctx, 31, 0x3722F8u);
    ctx->pc = 0x3722F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3722F0u;
    // 0x3722f4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3722F0u, 0x3722F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3722F8u;
label_3722f8:
    // 0x3722f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3722f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3722fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3722fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372300: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x372300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x372304: 0xc102576  jal         func_4095D8
    ctx->pc = 0x372304u;
    SET_GPR_U32(ctx, 31, 0x37230Cu);
    ctx->pc = 0x372308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372304u;
    // 0x372308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x372304u, 0x37230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37230Cu;
label_37230c:
    // 0x37230c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37230cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372310: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372310u;
    {
        const bool branch_taken_0x372310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372310u;
        // 0x372314: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372310) {
            ctx->pc = 0x3722E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3722e8;
        }
    }
    ctx->pc = 0x372318u;
    // 0x372318: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x372318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x37231c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37231cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372320: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x372320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x372324: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x372324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x372328: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x372328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37232c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x37232cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x372330: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x372330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x372334: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x372334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x372338: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x372338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37233c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x37233cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372340: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x372340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372344: 0x3e00008  jr          $ra
    ctx->pc = 0x372344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372344u;
        // 0x372348: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37234Cu;
    // 0x37234c: 0x0  nop
    ctx->pc = 0x37234cu;
    // NOP
    ctx->pc = 0x372350u;
}
