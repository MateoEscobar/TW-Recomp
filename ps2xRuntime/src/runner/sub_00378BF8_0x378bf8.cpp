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

// Function: sub_00378BF8
// Address: 0x378bf8 - 0x378d78
void sub_00378BF8_0x378bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378BF8_0x378bf8");
#endif

    switch (ctx->pc) {
        case 0x378c30u: goto label_378c30;
        case 0x378c38u: goto label_378c38;
        case 0x378c4cu: goto label_378c4c;
        case 0x378c54u: goto label_378c54;
        case 0x378c68u: goto label_378c68;
        case 0x378c70u: goto label_378c70;
        case 0x378c84u: goto label_378c84;
        case 0x378c8cu: goto label_378c8c;
        case 0x378c98u: goto label_378c98;
        case 0x378cb0u: goto label_378cb0;
        case 0x378cb8u: goto label_378cb8;
        case 0x378ce0u: goto label_378ce0;
        case 0x378cecu: goto label_378cec;
        case 0x378d04u: goto label_378d04;
        case 0x378d10u: goto label_378d10;
        case 0x378d18u: goto label_378d18;
        case 0x378d28u: goto label_378d28;
        case 0x378d3cu: goto label_378d3c;
        default: break;
    }

    ctx->pc = 0x378bf8u;

    // 0x378bf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x378bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x378bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378c00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x378c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x378c04: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x378c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x378c08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x378c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x378c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x378c14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x378c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x378c18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x378c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x378c1c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x378c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x378c20: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x378c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x378c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378c28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378C28u;
    SET_GPR_U32(ctx, 31, 0x378C30u);
    ctx->pc = 0x378C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C28u;
    // 0x378c2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378C28u, 0x378C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C30u;
label_378c30:
    // 0x378c30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378C30u;
    SET_GPR_U32(ctx, 31, 0x378C38u);
    ctx->pc = 0x378C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C30u;
    // 0x378c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378C30u, 0x378C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C38u;
label_378c38:
    // 0x378c38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378C44u;
    SET_GPR_U32(ctx, 31, 0x378C4Cu);
    ctx->pc = 0x378C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C44u;
    // 0x378c48: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378C44u, 0x378C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C4Cu;
label_378c4c:
    // 0x378c4c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378C4Cu;
    SET_GPR_U32(ctx, 31, 0x378C54u);
    ctx->pc = 0x378C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C4Cu;
    // 0x378c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378C4Cu, 0x378C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C54u;
label_378c54:
    // 0x378c54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378C60u;
    SET_GPR_U32(ctx, 31, 0x378C68u);
    ctx->pc = 0x378C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C60u;
    // 0x378c64: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378C60u, 0x378C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C68u;
label_378c68:
    // 0x378c68: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378C68u;
    SET_GPR_U32(ctx, 31, 0x378C70u);
    ctx->pc = 0x378C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C68u;
    // 0x378c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378C68u, 0x378C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C70u;
label_378c70:
    // 0x378c70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x378c74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x378c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378C7Cu;
    SET_GPR_U32(ctx, 31, 0x378C84u);
    ctx->pc = 0x378C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C7Cu;
    // 0x378c80: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378C7Cu, 0x378C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C84u;
label_378c84:
    // 0x378c84: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378C84u;
    SET_GPR_U32(ctx, 31, 0x378C8Cu);
    ctx->pc = 0x378C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C84u;
    // 0x378c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378C84u, 0x378C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C8Cu;
label_378c8c:
    // 0x378c8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x378c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c94: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x378c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_378c98:
    // 0x378c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ca0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378ca4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ca8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378CA8u;
    SET_GPR_U32(ctx, 31, 0x378CB0u);
    ctx->pc = 0x378CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CA8u;
    // 0x378cac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378CA8u, 0x378CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CB0u;
label_378cb0:
    // 0x378cb0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378CB0u;
    SET_GPR_U32(ctx, 31, 0x378CB8u);
    ctx->pc = 0x378CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CB0u;
    // 0x378cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378CB0u, 0x378CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CB8u;
label_378cb8:
    // 0x378cb8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378cbc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378cc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378CC0u;
    {
        const bool branch_taken_0x378cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CC0u;
        // 0x378cc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cc0) {
            ctx->pc = 0x378C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378c98;
        }
    }
    ctx->pc = 0x378CC8u;
    // 0x378cc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x378cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ccc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x378cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378cd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x378cd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x378cd4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x378cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378cd8: 0xc0e70e2  jal         func_39C388
    ctx->pc = 0x378CD8u;
    SET_GPR_U32(ctx, 31, 0x378CE0u);
    ctx->pc = 0x378CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CD8u;
    // 0x378cdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C388u, 0x378CD8u, 0x378CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CE0u;
label_378ce0:
    // 0x378ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x378ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ce4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378CE4u;
    SET_GPR_U32(ctx, 31, 0x378CECu);
    ctx->pc = 0x378CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CE4u;
    // 0x378ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378CE4u, 0x378CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CECu;
label_378cec:
    // 0x378cec: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x378CECu;
    {
        const bool branch_taken_0x378cec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x378CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CECu;
        // 0x378cf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cec) {
            ctx->pc = 0x378D08u;
            goto label_378d08;
        }
    }
    ctx->pc = 0x378CF4u;
    // 0x378cf4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x378cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x378cf8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x378cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x378cfc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x378CFCu;
    SET_GPR_U32(ctx, 31, 0x378D04u);
    ctx->pc = 0x378D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CFCu;
    // 0x378d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x378CFCu, 0x378D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D04u;
label_378d04:
    // 0x378d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x378d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378d08:
    // 0x378d08: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x378D08u;
    SET_GPR_U32(ctx, 31, 0x378D10u);
    ctx->pc = 0x378D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D08u;
    // 0x378d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x378D08u, 0x378D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D10u;
label_378d10:
    // 0x378d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378d18:
    // 0x378d18: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x378d1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378d20: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378D20u;
    SET_GPR_U32(ctx, 31, 0x378D28u);
    ctx->pc = 0x378D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D20u;
    // 0x378d24: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378D20u, 0x378D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D28u;
label_378d28:
    // 0x378d28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378d34: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378D34u;
    SET_GPR_U32(ctx, 31, 0x378D3Cu);
    ctx->pc = 0x378D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D34u;
    // 0x378d38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378D34u, 0x378D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D3Cu;
label_378d3c:
    // 0x378d3c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378d40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378D40u;
    {
        const bool branch_taken_0x378d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D40u;
        // 0x378d44: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d40) {
            ctx->pc = 0x378D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378d18;
        }
    }
    ctx->pc = 0x378D48u;
    // 0x378d48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x378d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x378d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378d50: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x378d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x378d54: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x378d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378d58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x378d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378d5c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x378d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378d60: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x378d60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378d68: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x378d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x378d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x378D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D6Cu;
        // 0x378d70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378D74u;
    // 0x378d74: 0x0  nop
    ctx->pc = 0x378d74u;
    // NOP
    ctx->pc = 0x378d78u;
}
