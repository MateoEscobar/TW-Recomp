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

// Function: sub_003161A0
// Address: 0x3161a0 - 0x316298
void sub_003161A0_0x3161a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003161A0_0x3161a0");
#endif

    switch (ctx->pc) {
        case 0x3161f8u: goto label_3161f8;
        case 0x31620cu: goto label_31620c;
        case 0x316258u: goto label_316258;
        case 0x316264u: goto label_316264;
        default: break;
    }

    ctx->pc = 0x3161a0u;

    // 0x3161a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3161a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3161a4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3161a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3161a8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3161a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3161ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3161acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3161b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3161b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3161b4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3161b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3161b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3161bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3161bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3161c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3161c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3161c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161c8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3161c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3161cc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3161ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161d0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3161d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3161d4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3161d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161d8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3161d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3161dc: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3161dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3161e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3161e4: 0xaf403  sra         $fp, $t2, 16
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3161e8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3161e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3161ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3161ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3161f0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3161F0u;
    SET_GPR_U32(ctx, 31, 0x3161F8u);
    ctx->pc = 0x3161F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161F0u;
    // 0x3161f4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3161F0u, 0x3161F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161F8u;
label_3161f8:
    // 0x3161f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3161f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161fc: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3161FCu;
    {
        const bool branch_taken_0x3161fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161FCu;
        // 0x316200: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161fc) {
            ctx->pc = 0x316268u;
            goto label_316268;
        }
    }
    ctx->pc = 0x316204u;
    // 0x316204: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316204u;
    SET_GPR_U32(ctx, 31, 0x31620Cu);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316204u, 0x31620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31620Cu;
label_31620c:
    // 0x31620c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316210: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x316210u;
    {
        const bool branch_taken_0x316210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316210u;
        // 0x316214: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316210) {
            ctx->pc = 0x316258u;
            goto label_316258;
        }
    }
    ctx->pc = 0x316218u;
    // 0x316218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x316218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31621c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316220: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x316220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316224: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x316224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x316228: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x316228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31622c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x316230: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x316230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316234: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x316234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x316238: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x316238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31623c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x316240: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x316240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316244: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x316244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x316248: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x316248u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31624c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316250: 0xc0c72f0  jal         func_31CBC0
    ctx->pc = 0x316250u;
    SET_GPR_U32(ctx, 31, 0x316258u);
    ctx->pc = 0x316254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316250u;
    // 0x316254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CBC0u, 0x316250u, 0x316258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316258u;
label_316258:
    // 0x316258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31625c: 0xc059590  jal         func_165640
    ctx->pc = 0x31625Cu;
    SET_GPR_U32(ctx, 31, 0x316264u);
    ctx->pc = 0x316260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31625Cu;
    // 0x316260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31625Cu, 0x316264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316264u;
label_316264:
    // 0x316264: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x316264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_316268:
    // 0x316268: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x316268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31626c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x31626cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316270: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x316270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316274: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x316274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316278: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x316278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31627c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x31627cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316280: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x316280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316284: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x316284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31628c: 0x3e00008  jr          $ra
    ctx->pc = 0x31628Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31628Cu;
        // 0x316290: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31628Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316294u;
    // 0x316294: 0x0  nop
    ctx->pc = 0x316294u;
    // NOP
    ctx->pc = 0x316298u;
}
