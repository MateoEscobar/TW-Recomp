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

// Function: sub_004176D8
// Address: 0x4176d8 - 0x4177d8
void sub_004176D8_0x4176d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004176D8_0x4176d8");
#endif

    switch (ctx->pc) {
        case 0x417728u: goto label_417728;
        case 0x417730u: goto label_417730;
        case 0x417748u: goto label_417748;
        case 0x417764u: goto label_417764;
        case 0x417770u: goto label_417770;
        case 0x417794u: goto label_417794;
        default: break;
    }

    ctx->pc = 0x4176d8u;

    // 0x4176d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4176d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4176dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4176dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4176e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4176e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4176e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4176e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4176e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4176ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4176ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4176f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4176f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4176f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4176f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4176f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4176fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4176fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417700: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x417700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x417704: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x417704u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
    // 0x417708: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x417708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41770c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x417710: 0x3c015d5e  lui         $at, 0x5D5E
    ctx->pc = 0x417710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23902 << 16));
    // 0x417714: 0x34210b6b  ori         $at, $at, 0xB6B
    ctx->pc = 0x417714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2923);
    // 0x417718: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x417718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41771c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x41771cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x417720: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x417720u;
    {
        const bool branch_taken_0x417720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417720u;
        // 0x417724: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417720) {
            ctx->pc = 0x41778Cu;
            goto label_41778c;
        }
    }
    ctx->pc = 0x417728u;
label_417728:
    // 0x417728: 0xc105774  jal         func_415DD0
    ctx->pc = 0x417728u;
    SET_GPR_U32(ctx, 31, 0x417730u);
    ctx->pc = 0x41772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417728u;
    // 0x41772c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417728u, 0x417730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417730u;
label_417730:
    // 0x417730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417734: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x417734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x417738: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x417738u;
    {
        const bool branch_taken_0x417738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417738u;
        // 0x41773c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417738) {
            ctx->pc = 0x417788u;
            goto label_417788;
        }
    }
    ctx->pc = 0x417740u;
    // 0x417740: 0xc1059c6  jal         func_416718
    ctx->pc = 0x417740u;
    SET_GPR_U32(ctx, 31, 0x417748u);
    ctx->pc = 0x417744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417740u;
    // 0x417744: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x417740u, 0x417748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417748u;
label_417748:
    // 0x417748: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x417748u;
    {
        const bool branch_taken_0x417748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417748u;
        // 0x41774c: 0x8ea2bd30  lw          $v0, -0x42D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417748) {
            ctx->pc = 0x417788u;
            goto label_417788;
        }
    }
    ctx->pc = 0x417750u;
    // 0x417750: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x417750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x417754: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x417754u;
    {
        const bool branch_taken_0x417754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x417754) {
            ctx->pc = 0x417758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417754u;
            // 0x417758: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41778Cu;
            goto label_41778c;
        }
    }
    ctx->pc = 0x41775Cu;
    // 0x41775c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41775Cu;
    SET_GPR_U32(ctx, 31, 0x417764u);
    ctx->pc = 0x417760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41775Cu;
    // 0x417760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41775Cu, 0x417764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417764u;
label_417764:
    // 0x417764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417768: 0xc0cdb26  jal         func_336C98
    ctx->pc = 0x417768u;
    SET_GPR_U32(ctx, 31, 0x417770u);
    ctx->pc = 0x41776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417768u;
    // 0x41776c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x417768u, 0x417770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417770u;
label_417770:
    // 0x417770: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x417770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x417774: 0x0  nop
    ctx->pc = 0x417774u;
    // NOP
    // 0x417778: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x417778u;
    {
        const bool branch_taken_0x417778 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x417778) {
            ctx->pc = 0x41777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417778u;
            // 0x41777c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41778Cu;
            goto label_41778c;
        }
    }
    ctx->pc = 0x417780u;
    // 0x417780: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x417780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417784: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x417784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_417788:
    // 0x417788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x417788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_41778c:
    // 0x41778c: 0xc10574c  jal         func_415D30
    ctx->pc = 0x41778Cu;
    SET_GPR_U32(ctx, 31, 0x417794u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x41778Cu, 0x417794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417794u;
label_417794:
    // 0x417794: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x417794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x417798: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x417798u;
    {
        const bool branch_taken_0x417798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x417798) {
            ctx->pc = 0x417728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417728;
        }
    }
    ctx->pc = 0x4177A0u;
    // 0x4177a0: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4177A0u;
    {
        const bool branch_taken_0x4177a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4177a0) {
            ctx->pc = 0x4177A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4177A0u;
            // 0x4177a4: 0xe6940000  swc1        $f20, 0x0($s4) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4177A8u;
            goto label_4177a8;
        }
    }
    ctx->pc = 0x4177A8u;
label_4177a8:
    // 0x4177a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4177a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4177acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4177b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4177b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4177b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4177b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4177b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4177b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4177bc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4177bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4177c0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4177c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4177c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4177c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4177c8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4177c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4177cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4177CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4177D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4177CCu;
        // 0x4177d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4177CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4177D4u;
    // 0x4177d4: 0x0  nop
    ctx->pc = 0x4177d4u;
    // NOP
    ctx->pc = 0x4177d8u;
}
