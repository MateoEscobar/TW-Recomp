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

// Function: sub_00239100
// Address: 0x239100 - 0x239188
void sub_00239100_0x239100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239100_0x239100");
#endif

    switch (ctx->pc) {
        case 0x239120u: goto label_239120;
        case 0x239128u: goto label_239128;
        case 0x239148u: goto label_239148;
        case 0x239150u: goto label_239150;
        default: break;
    }

    ctx->pc = 0x239100u;

    // 0x239100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x239108: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23910c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23910cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x239110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x239114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239118: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239118u, 0x239120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0xc08a61a  jal         func_229868
    ctx->pc = 0x239120u;
    SET_GPR_U32(ctx, 31, 0x239128u);
    ctx->pc = 0x239124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239120u;
    // 0x239124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239120u, 0x239128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239128u;
label_239128:
    // 0x239128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23912c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23912Cu;
    {
        const bool branch_taken_0x23912c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23912Cu;
        // 0x239130: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23912c) {
            ctx->pc = 0x239170u;
            goto label_239170;
        }
    }
    ctx->pc = 0x239134u;
    // 0x239134: 0xc60f0000  lwc1        $f15, 0x0($s0)
    ctx->pc = 0x239134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x239138: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x239138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23913c: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x23913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239140: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x239140u;
    SET_GPR_U32(ctx, 31, 0x239148u);
    ctx->pc = 0x239144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239140u;
    // 0x239144: 0xc60e0004  lwc1        $f14, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x239140u, 0x239148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239148u;
label_239148:
    // 0x239148: 0xc085e9c  jal         func_217A70
    ctx->pc = 0x239148u;
    SET_GPR_U32(ctx, 31, 0x239150u);
    ctx->pc = 0x23914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239148u;
    // 0x23914c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A70u, 0x239148u, 0x239150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239150u;
label_239150:
    // 0x239150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239150u;
    {
        const bool branch_taken_0x239150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239150u;
        // 0x239154: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239150) {
            ctx->pc = 0x239170u;
            goto label_239170;
        }
    }
    ctx->pc = 0x239158u;
    // 0x239158: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x239158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x23915c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x23915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x239160: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x239160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x239164: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x239164u;
    {
        const bool branch_taken_0x239164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239164u;
        // 0x239168: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239164) {
            ctx->pc = 0x239170u;
            goto label_239170;
        }
    }
    ctx->pc = 0x23916Cu;
    // 0x23916c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x23916cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_239170:
    // 0x239170: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239174: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x239174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23917c: 0x3e00008  jr          $ra
    ctx->pc = 0x23917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23917Cu;
        // 0x239180: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239184u;
    // 0x239184: 0x0  nop
    ctx->pc = 0x239184u;
    // NOP
    ctx->pc = 0x239188u;
}
