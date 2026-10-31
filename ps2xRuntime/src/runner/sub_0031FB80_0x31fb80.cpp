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

// Function: sub_0031FB80
// Address: 0x31fb80 - 0x31fdc0
void sub_0031FB80_0x31fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB80_0x31fb80");
#endif

    switch (ctx->pc) {
        case 0x31fbbcu: goto label_31fbbc;
        case 0x31fbd4u: goto label_31fbd4;
        case 0x31fc00u: goto label_31fc00;
        case 0x31fc0cu: goto label_31fc0c;
        case 0x31fc14u: goto label_31fc14;
        case 0x31fc3cu: goto label_31fc3c;
        case 0x31fc64u: goto label_31fc64;
        case 0x31fc74u: goto label_31fc74;
        case 0x31fc90u: goto label_31fc90;
        case 0x31fca4u: goto label_31fca4;
        case 0x31fcd4u: goto label_31fcd4;
        case 0x31fd04u: goto label_31fd04;
        case 0x31fd14u: goto label_31fd14;
        case 0x31fd48u: goto label_31fd48;
        case 0x31fd5cu: goto label_31fd5c;
        case 0x31fd7cu: goto label_31fd7c;
        case 0x31fd84u: goto label_31fd84;
        case 0x31fd90u: goto label_31fd90;
        default: break;
    }

    ctx->pc = 0x31fb80u;

    // 0x31fb80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31fb84: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31fb88: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x31fb8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31fb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x31fb94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x31fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x31fb98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x31fb9c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31fba0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x31fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x31fba4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31fba8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x31fbac: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x31fbb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fbb4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31FBB4u;
    SET_GPR_U32(ctx, 31, 0x31FBBCu);
    ctx->pc = 0x31FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBB4u;
    // 0x31fbb8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31FBB4u, 0x31FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FBBCu;
label_31fbbc:
    // 0x31fbbc: 0x2c42004c  sltiu       $v0, $v0, 0x4C
    ctx->pc = 0x31fbbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x31fbc0: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x31FBC0u;
    {
        const bool branch_taken_0x31fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBC0u;
        // 0x31fbc4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbc0) {
            ctx->pc = 0x31FD94u;
            goto label_31fd94;
        }
    }
    ctx->pc = 0x31FBC8u;
    // 0x31fbc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31fbcc: 0xc059856  jal         func_166158
    ctx->pc = 0x31FBCCu;
    SET_GPR_U32(ctx, 31, 0x31FBD4u);
    ctx->pc = 0x31FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBCCu;
    // 0x31fbd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31FBCCu, 0x31FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FBD4u;
label_31fbd4:
    // 0x31fbd4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31fbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31fbd8: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x31FBD8u;
    {
        const bool branch_taken_0x31fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBD8u;
        // 0x31fbdc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbd8) {
            ctx->pc = 0x31FD94u;
            goto label_31fd94;
        }
    }
    ctx->pc = 0x31FBE0u;
    // 0x31fbe0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31fbe4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x31fbe8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x31fbec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31fbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31fbf0: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x31fbf4: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x31fbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x31fbf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31fbf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbfc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x31fbfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fc00:
    // 0x31fc00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc04: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31FC04u;
    SET_GPR_U32(ctx, 31, 0x31FC0Cu);
    ctx->pc = 0x31FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC04u;
    // 0x31fc08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31FC04u, 0x31FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC0Cu;
label_31fc0c:
    // 0x31fc0c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31FC0Cu;
    SET_GPR_U32(ctx, 31, 0x31FC14u);
    ctx->pc = 0x31FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC0Cu;
    // 0x31fc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31FC0Cu, 0x31FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC14u;
label_31fc14:
    // 0x31fc14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31fc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc18: 0x52200027  beql        $s1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x31FC18u;
    {
        const bool branch_taken_0x31fc18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc18) {
            ctx->pc = 0x31FC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC18u;
            // 0x31fc1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC20u;
    // 0x31fc20: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x31fc24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31fc24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31fc28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31fc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31fc2c: 0x50560022  beql        $v0, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x31FC2Cu;
    {
        const bool branch_taken_0x31fc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x31fc2c) {
            ctx->pc = 0x31FC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC2Cu;
            // 0x31fc30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC34u;
    // 0x31fc34: 0xc05959e  jal         func_165678
    ctx->pc = 0x31FC34u;
    SET_GPR_U32(ctx, 31, 0x31FC3Cu);
    ctx->pc = 0x31FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC34u;
    // 0x31fc38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31FC34u, 0x31FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC3Cu;
label_31fc3c:
    // 0x31fc3c: 0x5051001e  beql        $v0, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FC3Cu;
    {
        const bool branch_taken_0x31fc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31fc3c) {
            ctx->pc = 0x31FC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC3Cu;
            // 0x31fc40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC44u;
    // 0x31fc44: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x31fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x31fc48: 0x5222001b  beql        $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31FC48u;
    {
        const bool branch_taken_0x31fc48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31fc48) {
            ctx->pc = 0x31FC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC48u;
            // 0x31fc4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC50u;
    // 0x31fc50: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x31fc54: 0x52220018  beql        $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31FC54u;
    {
        const bool branch_taken_0x31fc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31fc54) {
            ctx->pc = 0x31FC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC54u;
            // 0x31fc58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC5Cu;
    // 0x31fc5c: 0xc05959e  jal         func_165678
    ctx->pc = 0x31FC5Cu;
    SET_GPR_U32(ctx, 31, 0x31FC64u);
    ctx->pc = 0x31FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC5Cu;
    // 0x31fc60: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31FC5Cu, 0x31FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC64u;
label_31fc64:
    // 0x31fc64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31FC64u;
    {
        const bool branch_taken_0x31fc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC64u;
        // 0x31fc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc64) {
            ctx->pc = 0x31FCB4u;
            goto label_31fcb4;
        }
    }
    ctx->pc = 0x31FC6Cu;
    // 0x31fc6c: 0xc0c7ec6  jal         func_31FB18
    ctx->pc = 0x31FC6Cu;
    SET_GPR_U32(ctx, 31, 0x31FC74u);
    ctx->pc = 0x31FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC6Cu;
    // 0x31fc70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB18u, 0x31FC6Cu, 0x31FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC74u;
label_31fc74:
    // 0x31fc74: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FC74u;
    {
        const bool branch_taken_0x31fc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc74) {
            ctx->pc = 0x31FC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC74u;
            // 0x31fc78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCB8u;
            goto label_31fcb8;
        }
    }
    ctx->pc = 0x31FC7Cu;
    // 0x31fc7c: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x31fc80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31fc84: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x31fc84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x31fc88: 0xc05959e  jal         func_165678
    ctx->pc = 0x31FC88u;
    SET_GPR_U32(ctx, 31, 0x31FC90u);
    ctx->pc = 0x31FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC88u;
    // 0x31fc8c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31FC88u, 0x31FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC90u;
label_31fc90:
    // 0x31fc90: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x31fc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc98: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31fc9c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x31FC9Cu;
    SET_GPR_U32(ctx, 31, 0x31FCA4u);
    ctx->pc = 0x31FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC9Cu;
    // 0x31fca0: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31FC9Cu, 0x31FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCA4u;
label_31fca4:
    // 0x31fca4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31fca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fca8: 0x0  nop
    ctx->pc = 0x31fca8u;
    // NOP
    // 0x31fcac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31FCACu;
    {
        const bool branch_taken_0x31fcac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fcac) {
            ctx->pc = 0x31FCC4u;
            goto label_31fcc4;
        }
    }
    ctx->pc = 0x31FCB4u;
label_31fcb4:
    // 0x31fcb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31fcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31fcb8:
    // 0x31fcb8: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31fcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31fcbc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x31FCBCu;
    {
        const bool branch_taken_0x31fcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCBCu;
        // 0x31fcc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcbc) {
            ctx->pc = 0x31FC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fc00;
        }
    }
    ctx->pc = 0x31FCC4u;
label_31fcc4:
    // 0x31fcc4: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x31FCC4u;
    {
        const bool branch_taken_0x31fcc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCC4u;
        // 0x31fcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcc4) {
            ctx->pc = 0x31FD90u;
            goto label_31fd90;
        }
    }
    ctx->pc = 0x31FCCCu;
    // 0x31fccc: 0xc105d9c  jal         func_417670
    ctx->pc = 0x31FCCCu;
    SET_GPR_U32(ctx, 31, 0x31FCD4u);
    ctx->pc = 0x31FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCCCu;
    // 0x31fcd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417670u, 0x31FCCCu, 0x31FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FCD4u;
label_31fcd4:
    // 0x31fcd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31fcd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcd8: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x31FCD8u;
    {
        const bool branch_taken_0x31fcd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCD8u;
        // 0x31fcdc: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcd8) {
            ctx->pc = 0x31FD90u;
            goto label_31fd90;
        }
    }
    ctx->pc = 0x31FCE0u;
    // 0x31fce0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31fce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x31fce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31fce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fce8: 0x0  nop
    ctx->pc = 0x31fce8u;
    // NOP
    // 0x31fcec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31fcecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fcf0: 0x0  nop
    ctx->pc = 0x31fcf0u;
    // NOP
    // 0x31fcf4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x31FCF4u;
    {
        const bool branch_taken_0x31fcf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCF4u;
        // 0x31fcf8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcf4) {
            ctx->pc = 0x31FD94u;
            goto label_31fd94;
        }
    }
    ctx->pc = 0x31FCFCu;
    // 0x31fcfc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x31FCFCu;
    SET_GPR_U32(ctx, 31, 0x31FD04u);
    ctx->pc = 0x31FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FCFCu;
    // 0x31fd00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31FCFCu, 0x31FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD04u;
label_31fd04:
    // 0x31fd04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd0c: 0xc091e94  jal         func_247A50
    ctx->pc = 0x31FD0Cu;
    SET_GPR_U32(ctx, 31, 0x31FD14u);
    ctx->pc = 0x31FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD0Cu;
    // 0x31fd10: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x31FD0Cu, 0x31FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD14u;
label_31fd14:
    // 0x31fd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fd18: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FD18u;
    {
        const bool branch_taken_0x31fd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD18u;
        // 0x31fd1c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd18) {
            ctx->pc = 0x31FD94u;
            goto label_31fd94;
        }
    }
    ctx->pc = 0x31FD20u;
    // 0x31fd20: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x31fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fd24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x31fd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x31fd28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31fd28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fd2c: 0x0  nop
    ctx->pc = 0x31fd2cu;
    // NOP
    // 0x31fd30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31fd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fd34: 0x0  nop
    ctx->pc = 0x31fd34u;
    // NOP
    // 0x31fd38: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x31FD38u;
    {
        const bool branch_taken_0x31fd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD38u;
        // 0x31fd3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd38) {
            ctx->pc = 0x31FD98u;
            goto label_31fd98;
        }
    }
    ctx->pc = 0x31FD40u;
    // 0x31fd40: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31FD40u;
    SET_GPR_U32(ctx, 31, 0x31FD48u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31FD40u, 0x31FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD48u;
label_31fd48:
    // 0x31fd48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31fd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd4c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x31FD4Cu;
    {
        const bool branch_taken_0x31fd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd4c) {
            ctx->pc = 0x31FD7Cu;
            goto label_31fd7c;
        }
    }
    ctx->pc = 0x31FD54u;
    // 0x31fd54: 0xc087502  jal         func_21D408
    ctx->pc = 0x31FD54u;
    SET_GPR_U32(ctx, 31, 0x31FD5Cu);
    ctx->pc = 0x31FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD54u;
    // 0x31fd58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31FD54u, 0x31FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD5Cu;
label_31fd5c:
    // 0x31fd5c: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x31fd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x31fd60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31fd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31fd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31fd68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31fd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fd6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31fd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd74: 0xc0b6dda  jal         func_2DB768
    ctx->pc = 0x31FD74u;
    SET_GPR_U32(ctx, 31, 0x31FD7Cu);
    ctx->pc = 0x31FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD74u;
    // 0x31fd78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x31FD74u, 0x31FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD7Cu;
label_31fd7c:
    // 0x31fd7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31FD7Cu;
    SET_GPR_U32(ctx, 31, 0x31FD84u);
    ctx->pc = 0x31FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD7Cu;
    // 0x31fd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31FD7Cu, 0x31FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD84u;
label_31fd84:
    // 0x31fd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd88: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31FD88u;
    SET_GPR_U32(ctx, 31, 0x31FD90u);
    ctx->pc = 0x31FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD88u;
    // 0x31fd8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31FD88u, 0x31FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD90u;
label_31fd90:
    // 0x31fd90: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31fd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31fd94:
    // 0x31fd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fd98:
    // 0x31fd98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31fd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31fd9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31fd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31fda0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31fda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fda4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31fda4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fda8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31fda8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fdac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31fdacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fdb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fdb4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x31fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31fdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x31FDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDB8u;
        // 0x31fdbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FDC0u;
}
