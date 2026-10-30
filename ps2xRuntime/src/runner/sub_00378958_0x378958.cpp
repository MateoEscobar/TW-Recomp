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

// Function: sub_00378958
// Address: 0x378958 - 0x378b00
void sub_00378958_0x378958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378958_0x378958");
#endif

    switch (ctx->pc) {
        case 0x378988u: goto label_378988;
        case 0x37899cu: goto label_37899c;
        case 0x3789a4u: goto label_3789a4;
        case 0x3789b8u: goto label_3789b8;
        case 0x3789d0u: goto label_3789d0;
        case 0x3789d8u: goto label_3789d8;
        case 0x3789f0u: goto label_3789f0;
        case 0x378a08u: goto label_378a08;
        case 0x378a10u: goto label_378a10;
        case 0x378a34u: goto label_378a34;
        case 0x378a40u: goto label_378a40;
        case 0x378a58u: goto label_378a58;
        case 0x378a64u: goto label_378a64;
        case 0x378a70u: goto label_378a70;
        case 0x378a80u: goto label_378a80;
        case 0x378a94u: goto label_378a94;
        case 0x378aa8u: goto label_378aa8;
        case 0x378ab8u: goto label_378ab8;
        case 0x378accu: goto label_378acc;
        default: break;
    }

    ctx->pc = 0x378958u;

    // 0x378958: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x378958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37895c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378960: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x378960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x378964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378968: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x378968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37896c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x378970: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x378970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x378974: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x378974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x378978: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x378978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x37897c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x378980: 0xc102488  jal         func_409220
    ctx->pc = 0x378980u;
    SET_GPR_U32(ctx, 31, 0x378988u);
    ctx->pc = 0x378984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378980u;
    // 0x378984: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x378980u, 0x378988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378988u;
label_378988:
    // 0x378988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37898c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378994: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378994u;
    SET_GPR_U32(ctx, 31, 0x37899Cu);
    ctx->pc = 0x378998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378994u;
    // 0x378998: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378994u, 0x37899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37899Cu;
label_37899c:
    // 0x37899c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37899Cu;
    SET_GPR_U32(ctx, 31, 0x3789A4u);
    ctx->pc = 0x3789A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37899Cu;
    // 0x3789a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37899Cu, 0x3789A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789A4u;
label_3789a4:
    // 0x3789a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3789a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789a8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3789a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3789ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3789acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789b0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3789b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789b4: 0x0  nop
    ctx->pc = 0x3789b4u;
    // NOP
label_3789b8:
    // 0x3789b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3789b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3789bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3789bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3789c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3789c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3789c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789c8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3789C8u;
    SET_GPR_U32(ctx, 31, 0x3789D0u);
    ctx->pc = 0x3789CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789C8u;
    // 0x3789cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3789C8u, 0x3789D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789D0u;
label_3789d0:
    // 0x3789d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3789D0u;
    SET_GPR_U32(ctx, 31, 0x3789D8u);
    ctx->pc = 0x3789D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789D0u;
    // 0x3789d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3789D0u, 0x3789D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789D8u;
label_3789d8:
    // 0x3789d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3789d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3789dc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3789dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3789e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3789E0u;
    {
        const bool branch_taken_0x3789e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3789E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789E0u;
        // 0x3789e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789e0) {
            ctx->pc = 0x3789B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3789b8;
        }
    }
    ctx->pc = 0x3789E8u;
    // 0x3789e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3789e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789ec: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3789ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3789f0:
    // 0x3789f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3789f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3789f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3789f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3789fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3789fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a00: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378A00u;
    SET_GPR_U32(ctx, 31, 0x378A08u);
    ctx->pc = 0x378A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A00u;
    // 0x378a04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378A00u, 0x378A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A08u;
label_378a08:
    // 0x378a08: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378A08u;
    SET_GPR_U32(ctx, 31, 0x378A10u);
    ctx->pc = 0x378A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A08u;
    // 0x378a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378A08u, 0x378A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A10u;
label_378a10:
    // 0x378a10: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378a14: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378a18: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378A18u;
    {
        const bool branch_taken_0x378a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A18u;
        // 0x378a1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a18) {
            ctx->pc = 0x3789F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3789f0;
        }
    }
    ctx->pc = 0x378A20u;
    // 0x378a20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x378a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a24: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x378a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x378a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a2c: 0xc0e6fec  jal         func_39BFB0
    ctx->pc = 0x378A2Cu;
    SET_GPR_U32(ctx, 31, 0x378A34u);
    ctx->pc = 0x378A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A2Cu;
    // 0x378a30: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x378A2Cu, 0x378A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A34u;
label_378a34:
    // 0x378a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x378a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a38: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378A38u;
    SET_GPR_U32(ctx, 31, 0x378A40u);
    ctx->pc = 0x378A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A38u;
    // 0x378a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378A38u, 0x378A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A40u;
label_378a40:
    // 0x378a40: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x378A40u;
    {
        const bool branch_taken_0x378a40 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x378A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A40u;
        // 0x378a44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a40) {
            ctx->pc = 0x378A5Cu;
            goto label_378a5c;
        }
    }
    ctx->pc = 0x378A48u;
    // 0x378a48: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x378a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x378a4c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x378a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x378a50: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x378A50u;
    SET_GPR_U32(ctx, 31, 0x378A58u);
    ctx->pc = 0x378A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A50u;
    // 0x378a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x378A50u, 0x378A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A58u;
label_378a58:
    // 0x378a58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x378a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378a5c:
    // 0x378a5c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x378A5Cu;
    SET_GPR_U32(ctx, 31, 0x378A64u);
    ctx->pc = 0x378A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A5Cu;
    // 0x378a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x378A5Cu, 0x378A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A64u;
label_378a64:
    // 0x378a64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x378a6c: 0x0  nop
    ctx->pc = 0x378a6cu;
    // NOP
label_378a70:
    // 0x378a70: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x378a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378a78: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378A78u;
    SET_GPR_U32(ctx, 31, 0x378A80u);
    ctx->pc = 0x378A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A78u;
    // 0x378a7c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378A78u, 0x378A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A80u;
label_378a80:
    // 0x378a80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378a8c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378A8Cu;
    SET_GPR_U32(ctx, 31, 0x378A94u);
    ctx->pc = 0x378A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A8Cu;
    // 0x378a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378A8Cu, 0x378A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A94u;
label_378a94:
    // 0x378a94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378a98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378A98u;
    {
        const bool branch_taken_0x378a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A98u;
        // 0x378a9c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a98) {
            ctx->pc = 0x378A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378a70;
        }
    }
    ctx->pc = 0x378AA0u;
    // 0x378aa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378aa4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x378aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378aa8:
    // 0x378aa8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x378aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x378aac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378ab0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378AB0u;
    SET_GPR_U32(ctx, 31, 0x378AB8u);
    ctx->pc = 0x378AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AB0u;
    // 0x378ab4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378AB0u, 0x378AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AB8u;
label_378ab8:
    // 0x378ab8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ac0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378ac4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378AC4u;
    SET_GPR_U32(ctx, 31, 0x378ACCu);
    ctx->pc = 0x378AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AC4u;
    // 0x378ac8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378AC4u, 0x378ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378ACCu;
label_378acc:
    // 0x378acc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378ad0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378AD0u;
    {
        const bool branch_taken_0x378ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AD0u;
        // 0x378ad4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ad0) {
            ctx->pc = 0x378AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378aa8;
        }
    }
    ctx->pc = 0x378AD8u;
    // 0x378ad8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x378ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x378adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378ae0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x378ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x378ae4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x378ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x378ae8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x378ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378aec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x378aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378af0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x378af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x378af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378af8: 0x3e00008  jr          $ra
    ctx->pc = 0x378AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AF8u;
        // 0x378afc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378B00u;
}
