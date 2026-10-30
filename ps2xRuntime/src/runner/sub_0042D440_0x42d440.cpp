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

// Function: sub_0042D440
// Address: 0x42d440 - 0x42d4e4
void sub_0042D440_0x42d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D440_0x42d440");
#endif

    switch (ctx->pc) {
        case 0x42d440u: goto label_42d440;
        case 0x42d444u: goto label_42d444;
        case 0x42d448u: goto label_42d448;
        case 0x42d44cu: goto label_42d44c;
        case 0x42d450u: goto label_42d450;
        case 0x42d454u: goto label_42d454;
        case 0x42d458u: goto label_42d458;
        case 0x42d45cu: goto label_42d45c;
        case 0x42d460u: goto label_42d460;
        case 0x42d464u: goto label_42d464;
        case 0x42d468u: goto label_42d468;
        case 0x42d46cu: goto label_42d46c;
        case 0x42d470u: goto label_42d470;
        case 0x42d474u: goto label_42d474;
        case 0x42d478u: goto label_42d478;
        case 0x42d47cu: goto label_42d47c;
        case 0x42d480u: goto label_42d480;
        case 0x42d484u: goto label_42d484;
        case 0x42d488u: goto label_42d488;
        case 0x42d48cu: goto label_42d48c;
        case 0x42d490u: goto label_42d490;
        case 0x42d494u: goto label_42d494;
        case 0x42d498u: goto label_42d498;
        case 0x42d49cu: goto label_42d49c;
        case 0x42d4a0u: goto label_42d4a0;
        case 0x42d4a4u: goto label_42d4a4;
        case 0x42d4a8u: goto label_42d4a8;
        case 0x42d4acu: goto label_42d4ac;
        case 0x42d4b0u: goto label_42d4b0;
        case 0x42d4b4u: goto label_42d4b4;
        case 0x42d4b8u: goto label_42d4b8;
        case 0x42d4bcu: goto label_42d4bc;
        case 0x42d4c0u: goto label_42d4c0;
        case 0x42d4c4u: goto label_42d4c4;
        case 0x42d4c8u: goto label_42d4c8;
        case 0x42d4ccu: goto label_42d4cc;
        case 0x42d4d0u: goto label_42d4d0;
        case 0x42d4d4u: goto label_42d4d4;
        case 0x42d4d8u: goto label_42d4d8;
        case 0x42d4dcu: goto label_42d4dc;
        case 0x42d4e0u: goto label_42d4e0;
        default: break;
    }

    ctx->pc = 0x42d440u;

label_42d440:
    // 0x42d440: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x42d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_42d444:
    // 0x42d444: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42d448:
    // 0x42d448: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x42d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_42d44c:
    // 0x42d44c: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x42d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_42d450:
    // 0x42d450: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x42d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_42d454:
    // 0x42d454: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x42d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_42d458:
    // 0x42d458: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x42d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_42d45c:
    // 0x42d45c: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x42d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_42d460:
    // 0x42d460: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x42d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_42d464:
    // 0x42d464: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x42d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_42d468:
    // 0x42d468: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x42d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_42d46c:
    // 0x42d46c: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x42d46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_42d470:
    // 0x42d470: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x42d470u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_42d474:
    // 0x42d474: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x42d474u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_42d478:
    // 0x42d478: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x42d478u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_42d47c:
    // 0x42d47c: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x42d47cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_42d480:
    // 0x42d480: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x42d480u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_42d484:
    // 0x42d484: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x42d484u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_42d488:
    // 0x42d488: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x42d488u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_42d48c:
    // 0x42d48c: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x42d48cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_42d490:
    // 0x42d490: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x42d490u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_42d494:
    // 0x42d494: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x42d494u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_42d498:
    // 0x42d498: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x42d498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_42d49c:
    // 0x42d49c: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x42d49cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_42d4a0:
    // 0x42d4a0: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42d4a4:
    // 0x42d4a4: 0x40f809  jalr        $v0
label_42d4a8:
    if (ctx->pc == 0x42D4A8u) {
        ctx->pc = 0x42D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4A4u;
        // 0x42d4a8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D4ACu;
        goto label_42d4ac;
    }
    ctx->pc = 0x42D4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42D4ACu);
        ctx->pc = 0x42D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4A4u;
        // 0x42d4a8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D4A4u, 0x42D4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42D4ACu;
label_42d4ac:
    // 0x42d4ac: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x42d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_42d4b0:
    // 0x42d4b0: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x42d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_42d4b4:
    // 0x42d4b4: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x42d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_42d4b8:
    // 0x42d4b8: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x42d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_42d4bc:
    // 0x42d4bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42d4c0:
    // 0x42d4c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_42d4c4:
    if (ctx->pc == 0x42D4C4u) {
        ctx->pc = 0x42D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4C0u;
        // 0x42d4c4: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D4C8u;
        goto label_42d4c8;
    }
    ctx->pc = 0x42D4C0u;
    {
        const bool branch_taken_0x42d4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4C0u;
        // 0x42d4c4: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d4c0) {
            ctx->pc = 0x42D4DCu;
            goto label_42d4dc;
        }
    }
    ctx->pc = 0x42D4C8u;
label_42d4c8:
    // 0x42d4c8: 0xc10b22a  jal         func_42C8A8
label_42d4cc:
    if (ctx->pc == 0x42D4CCu) {
        ctx->pc = 0x42D4D0u;
        goto label_42d4d0;
    }
    ctx->pc = 0x42D4C8u;
    SET_GPR_U32(ctx, 31, 0x42D4D0u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42D4C8u, 0x42D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D4D0u;
label_42d4d0:
    // 0x42d4d0: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x42d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_42d4d4:
    // 0x42d4d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_42d4d8:
    if (ctx->pc == 0x42D4D8u) {
        ctx->pc = 0x42D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4D4u;
        // 0x42d4d8: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D4DCu;
        goto label_42d4dc;
    }
    ctx->pc = 0x42D4D4u;
    {
        const bool branch_taken_0x42d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D4D4u;
        // 0x42d4d8: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d4d4) {
            ctx->pc = 0x42D4E4u;
            return;
        }
    }
    ctx->pc = 0x42D4DCu;
label_42d4dc:
    // 0x42d4dc: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x42d4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_42d4e0:
    // 0x42d4e0: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x42d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
    ctx->pc = 0x42d4e4u;
}
