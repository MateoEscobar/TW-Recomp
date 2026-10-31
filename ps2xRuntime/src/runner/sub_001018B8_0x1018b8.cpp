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

// Function: sub_001018B8
// Address: 0x1018b8 - 0x101950
void sub_001018B8_0x1018b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001018B8_0x1018b8");
#endif

    switch (ctx->pc) {
        case 0x1018ccu: goto label_1018cc;
        case 0x1018ecu: goto label_1018ec;
        case 0x10190cu: goto label_10190c;
        case 0x101920u: goto label_101920;
        default: break;
    }

    ctx->pc = 0x1018b8u;

    // 0x1018b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1018b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1018bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1018bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1018c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1018c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1018c4: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x1018C4u;
    SET_GPR_U32(ctx, 31, 0x1018CCu);
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x1018C4u, 0x1018CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018CCu;
label_1018cc:
    // 0x1018cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1018ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018d0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1018D0u;
    {
        const bool branch_taken_0x1018d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1018d0) {
            ctx->pc = 0x101904u;
            goto label_101904;
        }
    }
    ctx->pc = 0x1018D8u;
    // 0x1018d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1018d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1018dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1018dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1018e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1018e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1018e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1018E4u;
    {
        const bool branch_taken_0x1018e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018E4u;
        // 0x1018e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018e4) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x1018ECu;
label_1018ec:
    // 0x1018ec: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1018f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1018f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1018f4: 0x0  nop
    ctx->pc = 0x1018f4u;
    // NOP
    // 0x1018f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1018f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1018fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1018FCu;
    {
        const bool branch_taken_0x1018fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018FCu;
        // 0x101900: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018fc) {
            ctx->pc = 0x101944u;
            goto label_101944;
        }
    }
    ctx->pc = 0x101904u;
label_101904:
    // 0x101904: 0xc040494  jal         func_101250
    ctx->pc = 0x101904u;
    SET_GPR_U32(ctx, 31, 0x10190Cu);
    ctx->pc = 0x101908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101904u;
    // 0x101908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101904u, 0x10190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10190Cu;
label_10190c:
    // 0x10190c: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x10190cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101910: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101914: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101914u;
    {
        const bool branch_taken_0x101914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101914u;
        // 0x101918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101914) {
            ctx->pc = 0x10193Cu;
            goto label_10193c;
        }
    }
    ctx->pc = 0x10191Cu;
    // 0x10191c: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x10191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_101920:
    // 0x101920: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x101920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x101924: 0x1046fff1  beq         $v0, $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x101924u;
    {
        const bool branch_taken_0x101924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x101928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101924u;
        // 0x101928: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101924) {
            ctx->pc = 0x1018ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1018ec;
        }
    }
    ctx->pc = 0x10192Cu;
    // 0x10192c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x101930: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x101930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x101934: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101934u;
    {
        const bool branch_taken_0x101934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101934u;
        // 0x101938: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101934) {
            ctx->pc = 0x101920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101920;
        }
    }
    ctx->pc = 0x10193Cu;
label_10193c:
    // 0x10193c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10193cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101944:
    // 0x101944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101948: 0x3e00008  jr          $ra
    ctx->pc = 0x101948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101948u;
        // 0x10194c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101950u;
}
