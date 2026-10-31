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

// Function: sub_003168E8
// Address: 0x3168e8 - 0x316988
void sub_003168E8_0x3168e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003168E8_0x3168e8");
#endif

    switch (ctx->pc) {
        case 0x316910u: goto label_316910;
        case 0x316944u: goto label_316944;
        case 0x316960u: goto label_316960;
        case 0x31696cu: goto label_31696c;
        default: break;
    }

    ctx->pc = 0x3168e8u;

    // 0x3168e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3168e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3168ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3168ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3168f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3168f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3168f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3168f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3168f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3168f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3168fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3168fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316900: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x316900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x316904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x316908: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316908u;
    SET_GPR_U32(ctx, 31, 0x316910u);
    ctx->pc = 0x31690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316908u;
    // 0x31690c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316908u, 0x316910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316910u;
label_316910:
    // 0x316910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316914: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x316914u;
    {
        const bool branch_taken_0x316914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x316914) {
            ctx->pc = 0x316918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316914u;
            // 0x316918: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316970u;
            goto label_316970;
        }
    }
    ctx->pc = 0x31691Cu;
    // 0x31691c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x31691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316920: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x316920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316924: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x316924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x316928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31692c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31692cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x316930: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x316930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x316934: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x316934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x316938: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x316938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31693c: 0xc0c1956  jal         func_306558
    ctx->pc = 0x31693Cu;
    SET_GPR_U32(ctx, 31, 0x316944u);
    ctx->pc = 0x316940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31693Cu;
    // 0x316940: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x31693Cu, 0x316944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316944u;
label_316944:
    // 0x316944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316948: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316948u;
    {
        const bool branch_taken_0x316948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316948u;
        // 0x31694c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316948) {
            ctx->pc = 0x316960u;
            goto label_316960;
        }
    }
    ctx->pc = 0x316950u;
    // 0x316950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316958: 0xc0c6412  jal         func_319048
    ctx->pc = 0x316958u;
    SET_GPR_U32(ctx, 31, 0x316960u);
    ctx->pc = 0x31695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316958u;
    // 0x31695c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319048u, 0x316958u, 0x316960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316960u;
label_316960:
    // 0x316960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316964: 0xc059590  jal         func_165640
    ctx->pc = 0x316964u;
    SET_GPR_U32(ctx, 31, 0x31696Cu);
    ctx->pc = 0x316968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316964u;
    // 0x316968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316964u, 0x31696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31696Cu;
label_31696c:
    // 0x31696c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31696cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_316970:
    // 0x316970: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x316970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x316978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31697c: 0x3e00008  jr          $ra
    ctx->pc = 0x31697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31697Cu;
        // 0x316980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316984u;
    // 0x316984: 0x0  nop
    ctx->pc = 0x316984u;
    // NOP
    ctx->pc = 0x316988u;
}
