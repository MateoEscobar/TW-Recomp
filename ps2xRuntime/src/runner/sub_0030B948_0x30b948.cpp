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

// Function: sub_0030B948
// Address: 0x30b948 - 0x30bad0
void sub_0030B948_0x30b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B948_0x30b948");
#endif

    switch (ctx->pc) {
        case 0x30b970u: goto label_30b970;
        case 0x30b97cu: goto label_30b97c;
        case 0x30b984u: goto label_30b984;
        case 0x30b9a0u: goto label_30b9a0;
        case 0x30b9b4u: goto label_30b9b4;
        case 0x30b9c8u: goto label_30b9c8;
        case 0x30b9d4u: goto label_30b9d4;
        case 0x30b9e4u: goto label_30b9e4;
        case 0x30ba28u: goto label_30ba28;
        case 0x30ba34u: goto label_30ba34;
        case 0x30ba4cu: goto label_30ba4c;
        case 0x30ba60u: goto label_30ba60;
        case 0x30ba74u: goto label_30ba74;
        case 0x30ba80u: goto label_30ba80;
        case 0x30ba90u: goto label_30ba90;
        case 0x30baa4u: goto label_30baa4;
        case 0x30bab0u: goto label_30bab0;
        default: break;
    }

    ctx->pc = 0x30b948u;

    // 0x30b948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b94c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30b950: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30b954: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30b954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b958: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b95c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30b960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b968: 0xc087502  jal         func_21D408
    ctx->pc = 0x30B968u;
    SET_GPR_U32(ctx, 31, 0x30B970u);
    ctx->pc = 0x30B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B968u;
    // 0x30b96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30B968u, 0x30B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B970u;
label_30b970:
    // 0x30b970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30b970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b974: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x30B974u;
    SET_GPR_U32(ctx, 31, 0x30B97Cu);
    ctx->pc = 0x30B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B974u;
    // 0x30b978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30B974u, 0x30B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B97Cu;
label_30b97c:
    // 0x30b97c: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x30B97Cu;
    SET_GPR_U32(ctx, 31, 0x30B984u);
    ctx->pc = 0x30B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B97Cu;
    // 0x30b980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30B97Cu, 0x30B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B984u;
label_30b984:
    // 0x30b984: 0x8e1200cc  lw          $s2, 0xCC($s0)
    ctx->pc = 0x30b984u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30b988: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x30b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x30b98c: 0x1642002a  bne         $s2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30B98Cu;
    {
        const bool branch_taken_0x30b98c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B98Cu;
        // 0x30b990: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b98c) {
            ctx->pc = 0x30BA38u;
            goto label_30ba38;
        }
    }
    ctx->pc = 0x30B994u;
    // 0x30b994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b998: 0xc0c2e2e  jal         func_30B8B8
    ctx->pc = 0x30B998u;
    SET_GPR_U32(ctx, 31, 0x30B9A0u);
    ctx->pc = 0x30B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B998u;
    // 0x30b99c: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B8B8u, 0x30B998u, 0x30B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9A0u;
label_30b9a0:
    // 0x30b9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b9a4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30B9A4u;
    {
        const bool branch_taken_0x30b9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30b9a4) {
            ctx->pc = 0x30B9DCu;
            goto label_30b9dc;
        }
    }
    ctx->pc = 0x30B9ACu;
    // 0x30b9ac: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30B9ACu;
    SET_GPR_U32(ctx, 31, 0x30B9B4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30B9ACu, 0x30B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9B4u;
label_30b9b4:
    // 0x30b9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9b8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B9B8u;
    {
        const bool branch_taken_0x30b9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9B8u;
        // 0x30b9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9b8) {
            ctx->pc = 0x30B9C8u;
            goto label_30b9c8;
        }
    }
    ctx->pc = 0x30B9C0u;
    // 0x30b9c0: 0xc0bd83a  jal         func_2F60E8
    ctx->pc = 0x30B9C0u;
    SET_GPR_U32(ctx, 31, 0x30B9C8u);
    ctx->pc = 0x30B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9C0u;
    // 0x30b9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F60E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F60E8u, 0x30B9C0u, 0x30B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9C8u;
label_30b9c8:
    // 0x30b9c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9cc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30B9CCu;
    SET_GPR_U32(ctx, 31, 0x30B9D4u);
    ctx->pc = 0x30B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9CCu;
    // 0x30b9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30B9CCu, 0x30B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9D4u;
label_30b9d4:
    // 0x30b9d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30B9D4u;
    {
        const bool branch_taken_0x30b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9D4u;
        // 0x30b9d8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9d4) {
            ctx->pc = 0x30BA38u;
            goto label_30ba38;
        }
    }
    ctx->pc = 0x30B9DCu;
label_30b9dc:
    // 0x30b9dc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30B9DCu;
    SET_GPR_U32(ctx, 31, 0x30B9E4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30B9DCu, 0x30B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9E4u;
label_30b9e4:
    // 0x30b9e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9e8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x30B9E8u;
    {
        const bool branch_taken_0x30b9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9E8u;
        // 0x30b9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9e8) {
            ctx->pc = 0x30BA28u;
            goto label_30ba28;
        }
    }
    ctx->pc = 0x30B9F0u;
    // 0x30b9f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30b9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30b9f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x30b9f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30b9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b9fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30b9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba00: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x30ba04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30ba04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ba08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ba0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ba0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30ba10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ba14: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x30ba14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x30ba18: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x30ba18u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x30ba1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30ba1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba20: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x30BA20u;
    SET_GPR_U32(ctx, 31, 0x30BA28u);
    ctx->pc = 0x30BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA20u;
    // 0x30ba24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x30BA20u, 0x30BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA28u;
label_30ba28:
    // 0x30ba28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba2c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30BA2Cu;
    SET_GPR_U32(ctx, 31, 0x30BA34u);
    ctx->pc = 0x30BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA2Cu;
    // 0x30ba30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30BA2Cu, 0x30BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA34u;
label_30ba34:
    // 0x30ba34: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x30ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_30ba38:
    // 0x30ba38: 0x1642001e  bne         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30BA38u;
    {
        const bool branch_taken_0x30ba38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA38u;
        // 0x30ba3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba38) {
            ctx->pc = 0x30BAB4u;
            goto label_30bab4;
        }
    }
    ctx->pc = 0x30BA40u;
    // 0x30ba40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba44: 0xc0c2e2e  jal         func_30B8B8
    ctx->pc = 0x30BA44u;
    SET_GPR_U32(ctx, 31, 0x30BA4Cu);
    ctx->pc = 0x30BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA44u;
    // 0x30ba48: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B8B8u, 0x30BA44u, 0x30BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA4Cu;
label_30ba4c:
    // 0x30ba4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ba50: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30BA50u;
    {
        const bool branch_taken_0x30ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ba50) {
            ctx->pc = 0x30BA88u;
            goto label_30ba88;
        }
    }
    ctx->pc = 0x30BA58u;
    // 0x30ba58: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30BA58u;
    SET_GPR_U32(ctx, 31, 0x30BA60u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30BA58u, 0x30BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA60u;
label_30ba60:
    // 0x30ba60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ba60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba64: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BA64u;
    {
        const bool branch_taken_0x30ba64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA64u;
        // 0x30ba68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba64) {
            ctx->pc = 0x30BA74u;
            goto label_30ba74;
        }
    }
    ctx->pc = 0x30BA6Cu;
    // 0x30ba6c: 0xc0bda1e  jal         func_2F6878
    ctx->pc = 0x30BA6Cu;
    SET_GPR_U32(ctx, 31, 0x30BA74u);
    ctx->pc = 0x30BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA6Cu;
    // 0x30ba70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6878u, 0x30BA6Cu, 0x30BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA74u;
label_30ba74:
    // 0x30ba74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba78: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30BA78u;
    SET_GPR_U32(ctx, 31, 0x30BA80u);
    ctx->pc = 0x30BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA78u;
    // 0x30ba7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30BA78u, 0x30BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA80u;
label_30ba80:
    // 0x30ba80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30BA80u;
    {
        const bool branch_taken_0x30ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA80u;
        // 0x30ba84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba80) {
            ctx->pc = 0x30BAB4u;
            goto label_30bab4;
        }
    }
    ctx->pc = 0x30BA88u;
label_30ba88:
    // 0x30ba88: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30BA88u;
    SET_GPR_U32(ctx, 31, 0x30BA90u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30BA88u, 0x30BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA90u;
label_30ba90:
    // 0x30ba90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ba90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba94: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BA94u;
    {
        const bool branch_taken_0x30ba94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA94u;
        // 0x30ba98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba94) {
            ctx->pc = 0x30BAA4u;
            goto label_30baa4;
        }
    }
    ctx->pc = 0x30BA9Cu;
    // 0x30ba9c: 0xc0bdb8a  jal         func_2F6E28
    ctx->pc = 0x30BA9Cu;
    SET_GPR_U32(ctx, 31, 0x30BAA4u);
    ctx->pc = 0x30BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA9Cu;
    // 0x30baa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6E28u, 0x30BA9Cu, 0x30BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAA4u;
label_30baa4:
    // 0x30baa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baa8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30BAA8u;
    SET_GPR_U32(ctx, 31, 0x30BAB0u);
    ctx->pc = 0x30BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAA8u;
    // 0x30baac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30BAA8u, 0x30BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAB0u;
label_30bab0:
    // 0x30bab0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30bab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30bab4:
    // 0x30bab4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30bab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30babc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30babcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x30BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAC4u;
        // 0x30bac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BACCu;
    // 0x30bacc: 0x0  nop
    ctx->pc = 0x30baccu;
    // NOP
    ctx->pc = 0x30bad0u;
}
