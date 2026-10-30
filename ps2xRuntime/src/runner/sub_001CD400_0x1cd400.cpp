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

// Function: sub_001CD400
// Address: 0x1cd400 - 0x1cd578
void sub_001CD400_0x1cd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD400_0x1cd400");
#endif

    ctx->pc = 0x1cd400u;

    // 0x1cd400: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1cd404: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1cd404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
    // 0x1cd408: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1cd408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1cd40c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd410: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1cd414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd418: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1cd41c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cd41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cd420: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cd420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cd424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd428: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd42c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1cd430: 0xe441eb34  swc1        $f1, -0x14CC($v0)
    ctx->pc = 0x1cd430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EB34u, _value); } while (0); }
    // 0x1cd434: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cd434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cd438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD438u;
    {
        const bool branch_taken_0x1cd438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD438u;
        // 0x1cd43c: 0xe480eb38  swc1        $f0, -0x14C8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd438) {
            ctx->pc = 0x1CD46Cu;
            goto label_1cd46c;
        }
    }
    ctx->pc = 0x1CD440u;
    // 0x1cd440: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cd440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1cd444: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1cd448: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd44c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd450: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CD450u;
    {
        const bool branch_taken_0x1cd450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd450) {
            ctx->pc = 0x1CD454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD450u;
            // 0x1cd454: 0xe480eb38  swc1        $f0, -0x14C8($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961976), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD4A8u;
            goto label_1cd4a8;
        }
    }
    ctx->pc = 0x1CD458u;
    // 0x1cd458: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
    // 0x1cd45c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1cd45cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1cd460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD464u;
    {
        const bool branch_taken_0x1cd464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD464u;
        // 0x1cd468: 0xe480eb38  swc1        $f0, -0x14C8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd464) {
            ctx->pc = 0x1CD4A8u;
            goto label_1cd4a8;
        }
    }
    ctx->pc = 0x1CD46Cu;
label_1cd46c:
    // 0x1cd46c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1cd46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1cd470: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD470u;
    {
        const bool branch_taken_0x1cd470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD470u;
        // 0x1cd474: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd470) {
            ctx->pc = 0x1CD48Cu;
            goto label_1cd48c;
        }
    }
    ctx->pc = 0x1CD478u;
    // 0x1cd478: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x1cd478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
    // 0x1cd47c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cd480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD484u;
    {
        const bool branch_taken_0x1cd484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD484u;
        // 0x1cd488: 0xe480eb38  swc1        $f0, -0x14C8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd484) {
            ctx->pc = 0x1CD4A8u;
            goto label_1cd4a8;
        }
    }
    ctx->pc = 0x1CD48Cu;
label_1cd48c:
    // 0x1cd48c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD48Cu;
    {
        const bool branch_taken_0x1cd48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD48Cu;
        // 0x1cd490: 0x8ca2cdb4  lw          $v0, -0x324C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd48c) {
            ctx->pc = 0x1CD4ACu;
            goto label_1cd4ac;
        }
    }
    ctx->pc = 0x1CD494u;
    // 0x1cd494: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd498: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd4a0: 0x0  nop
    ctx->pc = 0x1cd4a0u;
    // NOP
    // 0x1cd4a4: 0xe480eb38  swc1        $f0, -0x14C8($a0)
    ctx->pc = 0x1cd4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961976), bits); }
label_1cd4a8:
    // 0x1cd4a8: 0x8ca2cdb4  lw          $v0, -0x324C($a1)
    ctx->pc = 0x1cd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954420)));
label_1cd4ac:
    // 0x1cd4ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd4b0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1cd4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1cd4b4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CD4B4u;
    {
        const bool branch_taken_0x1cd4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4B4u;
        // 0x1cd4b8: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4b4) {
            ctx->pc = 0x1CD524u;
            goto label_1cd524;
        }
    }
    ctx->pc = 0x1CD4BCu;
    // 0x1cd4bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD4BCu;
    {
        const bool branch_taken_0x1cd4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4BCu;
        // 0x1cd4c0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4bc) {
            ctx->pc = 0x1CD4E0u;
            goto label_1cd4e0;
        }
    }
    ctx->pc = 0x1CD4C4u;
    // 0x1cd4c4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CD4C4u;
    {
        const bool branch_taken_0x1cd4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C4u;
        // 0x1cd4c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c4) {
            ctx->pc = 0x1CD570u;
            goto label_1cd570;
        }
    }
    ctx->pc = 0x1CD4CCu;
    // 0x1cd4cc: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
    // 0x1cd4d0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1cd4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1cd4d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4D8u;
        // 0x1cd4dc: 0xe440eb2c  swc1        $f0, -0x14D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961964), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4E0u;
label_1cd4e0:
    // 0x1cd4e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD4E0u;
    {
        const bool branch_taken_0x1cd4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4E0u;
        // 0x1cd4e4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4e0) {
            ctx->pc = 0x1CD508u;
            goto label_1cd508;
        }
    }
    ctx->pc = 0x1CD4E8u;
    // 0x1cd4e8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1cd4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1cd4ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cd4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1cd4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd4f4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1cd4f8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cd4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cd4fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd500: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD500u;
    {
        const bool branch_taken_0x1cd500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD500u;
        // 0x1cd504: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd500) {
            ctx->pc = 0x1CD568u;
            goto label_1cd568;
        }
    }
    ctx->pc = 0x1CD508u;
label_1cd508:
    // 0x1cd508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd50c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd510: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1cd514: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cd514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cd518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd51c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD51Cu;
    {
        const bool branch_taken_0x1cd51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD51Cu;
        // 0x1cd520: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd51c) {
            ctx->pc = 0x1CD568u;
            goto label_1cd568;
        }
    }
    ctx->pc = 0x1CD524u;
label_1cd524:
    // 0x1cd524: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1cd524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1cd528: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD528u;
    {
        const bool branch_taken_0x1cd528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD528u;
        // 0x1cd52c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd528) {
            ctx->pc = 0x1CD550u;
            goto label_1cd550;
        }
    }
    ctx->pc = 0x1CD530u;
    // 0x1cd530: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1cd534: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd53c: 0x3c013ea6  lui         $at, 0x3EA6
    ctx->pc = 0x1cd53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16038 << 16));
    // 0x1cd540: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1cd540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1cd544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD548u;
    {
        const bool branch_taken_0x1cd548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD548u;
        // 0x1cd54c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd548) {
            ctx->pc = 0x1CD568u;
            goto label_1cd568;
        }
    }
    ctx->pc = 0x1CD550u;
label_1cd550:
    // 0x1cd550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd558: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x1cd55c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1cd560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cd568:
    // 0x1cd568: 0xe461eb2c  swc1        $f1, -0x14D4($v1)
    ctx->pc = 0x1cd568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961964), bits); }
    // 0x1cd56c: 0xe440eb30  swc1        $f0, -0x14D0($v0)
    ctx->pc = 0x1cd56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961968), bits); }
label_1cd570:
    // 0x1cd570: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD578u;
}
