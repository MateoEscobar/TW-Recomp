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

// Function: sub_00222288
// Address: 0x222288 - 0x222370
void sub_00222288_0x222288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222288_0x222288");
#endif

    switch (ctx->pc) {
        case 0x222310u: goto label_222310;
        case 0x222348u: goto label_222348;
        default: break;
    }

    ctx->pc = 0x222288u;

    // 0x222288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22228c: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x22228cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
    // 0x222290: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x222290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x222294: 0x25294b00  addiu       $t1, $t1, 0x4B00
    ctx->pc = 0x222294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19200));
    // 0x222298: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x222298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22229c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2222a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2222a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2222a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2222a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2222ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2222acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222b0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2222b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2222b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2222b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2222b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2222bc: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x2222bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x2222c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2222c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2222c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2222c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2222ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2222d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2222d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2222d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2222d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2222d8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2222d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2222dc: 0x84a30092  lh          $v1, 0x92($a1)
    ctx->pc = 0x2222dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2222e0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2222e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2222e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2222e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222e8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2222e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2222ec: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2222ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2222f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2222f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2222f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2222f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2222f8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2222f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2222fc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2222fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x222300: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x222300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222304: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x222304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x222308: 0xc0937d0  jal         func_24DF40
    ctx->pc = 0x222308u;
    SET_GPR_U32(ctx, 31, 0x222310u);
    ctx->pc = 0x22230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222308u;
    // 0x22230c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x222308u, 0x222310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222310u;
label_222310:
    // 0x222310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222314: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x222314u;
    {
        const bool branch_taken_0x222314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x222318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222314u;
        // 0x222318: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222314) {
            ctx->pc = 0x222350u;
            goto label_222350;
        }
    }
    ctx->pc = 0x22231Cu;
    // 0x22231c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222320: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x222320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x222324: 0x34213334  ori         $at, $at, 0x3334
    ctx->pc = 0x222324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13108);
    // 0x222328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22232c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222330: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x222330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x222338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22233c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22233cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222340: 0xc0937d0  jal         func_24DF40
    ctx->pc = 0x222340u;
    SET_GPR_U32(ctx, 31, 0x222348u);
    ctx->pc = 0x222344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222340u;
    // 0x222344: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x222340u, 0x222348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222348u;
label_222348:
    // 0x222348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x222348u;
    {
        const bool branch_taken_0x222348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222348u;
        // 0x22234c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222348) {
            ctx->pc = 0x222358u;
            goto label_222358;
        }
    }
    ctx->pc = 0x222350u;
label_222350:
    // 0x222350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222354: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x222354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_222358:
    // 0x222358: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x222358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22235c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22235cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222364: 0x3e00008  jr          $ra
    ctx->pc = 0x222364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222364u;
        // 0x222368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22236Cu;
    // 0x22236c: 0x0  nop
    ctx->pc = 0x22236cu;
    // NOP
    ctx->pc = 0x222370u;
}
