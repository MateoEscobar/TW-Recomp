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

// Function: sub_00430908
// Address: 0x430908 - 0x43097c
void sub_00430908_0x430908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430908_0x430908");
#endif

    ctx->pc = 0x430908u;

    // 0x430908: 0x78900000  lq          $s0, 0x0($a0)
    ctx->pc = 0x430908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43090c: 0x78910010  lq          $s1, 0x10($a0)
    ctx->pc = 0x43090cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x430910: 0x78920020  lq          $s2, 0x20($a0)
    ctx->pc = 0x430910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x430914: 0x78930030  lq          $s3, 0x30($a0)
    ctx->pc = 0x430914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x430918: 0x78940040  lq          $s4, 0x40($a0)
    ctx->pc = 0x430918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x43091c: 0x78950050  lq          $s5, 0x50($a0)
    ctx->pc = 0x43091cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x430920: 0x78960060  lq          $s6, 0x60($a0)
    ctx->pc = 0x430920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x430924: 0x78970070  lq          $s7, 0x70($a0)
    ctx->pc = 0x430924u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x430928: 0x789e0080  lq          $fp, 0x80($a0)
    ctx->pc = 0x430928u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x43092c: 0xc4940090  lwc1        $f20, 0x90($a0)
    ctx->pc = 0x43092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x430930: 0xc4950094  lwc1        $f21, 0x94($a0)
    ctx->pc = 0x430930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x430934: 0xc4960098  lwc1        $f22, 0x98($a0)
    ctx->pc = 0x430934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x430938: 0xc497009c  lwc1        $f23, 0x9C($a0)
    ctx->pc = 0x430938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x43093c: 0xc49800a0  lwc1        $f24, 0xA0($a0)
    ctx->pc = 0x43093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x430940: 0xc49900a4  lwc1        $f25, 0xA4($a0)
    ctx->pc = 0x430940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x430944: 0xc49a00a8  lwc1        $f26, 0xA8($a0)
    ctx->pc = 0x430944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x430948: 0xc49b00ac  lwc1        $f27, 0xAC($a0)
    ctx->pc = 0x430948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x43094c: 0xc49c00b0  lwc1        $f28, 0xB0($a0)
    ctx->pc = 0x43094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x430950: 0xc49d00b4  lwc1        $f29, 0xB4($a0)
    ctx->pc = 0x430950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x430954: 0xc49e00b8  lwc1        $f30, 0xB8($a0)
    ctx->pc = 0x430954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x430958: 0xc49f00bc  lwc1        $f31, 0xBC($a0)
    ctx->pc = 0x430958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x43095c: 0x789d00c0  lq          $sp, 0xC0($a0)
    ctx->pc = 0x43095cu;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x430960: 0x789f00d0  lq          $ra, 0xD0($a0)
    ctx->pc = 0x430960u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x430964: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x430964u;
    {
        const bool branch_taken_0x430964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x430964) {
            ctx->pc = 0x430970u;
            goto label_430970;
        }
    }
    ctx->pc = 0x43096Cu;
    // 0x43096c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_430970:
    // 0x430970: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x430970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430974: 0x3e00008  jr          $ra
    ctx->pc = 0x430974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43097Cu;
}
