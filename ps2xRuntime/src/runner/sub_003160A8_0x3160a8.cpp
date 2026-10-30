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

// Function: sub_003160A8
// Address: 0x3160a8 - 0x3161a0
void sub_003160A8_0x3160a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003160A8_0x3160a8");
#endif

    switch (ctx->pc) {
        case 0x316104u: goto label_316104;
        case 0x316118u: goto label_316118;
        case 0x31615cu: goto label_31615c;
        case 0x316168u: goto label_316168;
        default: break;
    }

    ctx->pc = 0x3160a8u;

    // 0x3160a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3160a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3160ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3160b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3160b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3160b4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3160b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3160b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3160b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3160bc: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3160bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3160c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3160c4: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x3160c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3160c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3160cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3160ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3160d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3160d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3160d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3160d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3160dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3160dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3160e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3160e4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3160e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160e8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3160e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3160ec: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x3160ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3160f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3160f4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3160f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3160f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3160f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3160fc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3160FCu;
    SET_GPR_U32(ctx, 31, 0x316104u);
    ctx->pc = 0x316100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3160FCu;
    // 0x316100: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3160FCu, 0x316104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316104u;
label_316104:
    // 0x316104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316108: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x316108u;
    {
        const bool branch_taken_0x316108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316108u;
        // 0x31610c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316108) {
            ctx->pc = 0x31616Cu;
            goto label_31616c;
        }
    }
    ctx->pc = 0x316110u;
    // 0x316110: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316110u;
    SET_GPR_U32(ctx, 31, 0x316118u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316110u, 0x316118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316118u;
label_316118:
    // 0x316118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31611c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x31611Cu;
    {
        const bool branch_taken_0x31611c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31611Cu;
        // 0x316120: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31611c) {
            ctx->pc = 0x31615Cu;
            goto label_31615c;
        }
    }
    ctx->pc = 0x316124u;
    // 0x316124: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x316124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x316128: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x316128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x31612c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31612cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316130: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x316130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x316134: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x316134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316138: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x316138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x31613c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x31613cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316140: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316144: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x316144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316148: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x316148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31614c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316154: 0xc0c7cc0  jal         func_31F300
    ctx->pc = 0x316154u;
    SET_GPR_U32(ctx, 31, 0x31615Cu);
    ctx->pc = 0x316158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316154u;
    // 0x316158: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F300u, 0x316154u, 0x31615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31615Cu;
label_31615c:
    // 0x31615c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316160: 0xc059590  jal         func_165640
    ctx->pc = 0x316160u;
    SET_GPR_U32(ctx, 31, 0x316168u);
    ctx->pc = 0x316164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316160u;
    // 0x316164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316160u, 0x316168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316168u;
label_316168:
    // 0x316168: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x316168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31616c:
    // 0x31616c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x31616cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316170: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x316170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316174: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x316174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316178: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x316178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31617c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31617cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316180: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x316180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316184: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x316184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316188: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x316188u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31618c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316190: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x316190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316194: 0x3e00008  jr          $ra
    ctx->pc = 0x316194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316194u;
        // 0x316198: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31619Cu;
    // 0x31619c: 0x0  nop
    ctx->pc = 0x31619cu;
    // NOP
    ctx->pc = 0x3161a0u;
}
