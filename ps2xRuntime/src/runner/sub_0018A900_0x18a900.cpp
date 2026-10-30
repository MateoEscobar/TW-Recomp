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

// Function: sub_0018A900
// Address: 0x18a900 - 0x18a980
void sub_0018A900_0x18a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A900_0x18a900");
#endif

    switch (ctx->pc) {
        case 0x18a928u: goto label_18a928;
        default: break;
    }

    ctx->pc = 0x18a900u;

    // 0x18a900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18a908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a910: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18a910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18a914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18a914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a91c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18a91cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18a920: 0xc05904e  jal         func_164138
    ctx->pc = 0x18A920u;
    SET_GPR_U32(ctx, 31, 0x18A928u);
    ctx->pc = 0x18A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A920u;
    // 0x18a924: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164138u, 0x18A920u, 0x18A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A928u;
label_18a928:
    // 0x18a928: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A928u;
    {
        const bool branch_taken_0x18a928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a928) {
            ctx->pc = 0x18A92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A928u;
            // 0x18a92c: 0xc6000c0c  lwc1        $f0, 0xC0C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A950u;
            goto label_18a950;
        }
    }
    ctx->pc = 0x18A930u;
    // 0x18a930: 0xc6000c08  lwc1        $f0, 0xC08($s0)
    ctx->pc = 0x18a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a934: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18a934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a938: 0x0  nop
    ctx->pc = 0x18a938u;
    // NOP
    // 0x18a93c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x18A93Cu;
    {
        const bool branch_taken_0x18a93c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a93c) {
            ctx->pc = 0x18A940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A93Cu;
            // 0x18a940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A96Cu;
            goto label_18a96c;
        }
    }
    ctx->pc = 0x18A944u;
    // 0x18a944: 0xae110c00  sw          $s1, 0xC00($s0)
    ctx->pc = 0x18a944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 17));
    // 0x18a948: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A948u;
    {
        const bool branch_taken_0x18a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A948u;
        // 0x18a94c: 0xe6140c08  swc1        $f20, 0xC08($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a948) {
            ctx->pc = 0x18A968u;
            goto label_18a968;
        }
    }
    ctx->pc = 0x18A950u;
label_18a950:
    // 0x18a950: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a954: 0x0  nop
    ctx->pc = 0x18a954u;
    // NOP
    // 0x18a958: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x18A958u;
    {
        const bool branch_taken_0x18a958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a958) {
            ctx->pc = 0x18A95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A958u;
            // 0x18a95c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A96Cu;
            goto label_18a96c;
        }
    }
    ctx->pc = 0x18A960u;
    // 0x18a960: 0xae110c04  sw          $s1, 0xC04($s0)
    ctx->pc = 0x18a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 17));
    // 0x18a964: 0xe6140c0c  swc1        $f20, 0xC0C($s0)
    ctx->pc = 0x18a964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3084), bits); }
label_18a968:
    // 0x18a968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a96c:
    // 0x18a96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a974: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a978: 0x3e00008  jr          $ra
    ctx->pc = 0x18A978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A978u;
        // 0x18a97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A980u;
}
