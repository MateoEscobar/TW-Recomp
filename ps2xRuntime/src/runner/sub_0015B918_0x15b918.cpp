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

// Function: sub_0015B918
// Address: 0x15b918 - 0x15baa0
void sub_0015B918_0x15b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B918_0x15b918");
#endif

    switch (ctx->pc) {
        case 0x15b918u: goto label_15b918;
        case 0x15b91cu: goto label_15b91c;
        case 0x15b920u: goto label_15b920;
        case 0x15b924u: goto label_15b924;
        case 0x15b928u: goto label_15b928;
        case 0x15b92cu: goto label_15b92c;
        case 0x15b930u: goto label_15b930;
        case 0x15b934u: goto label_15b934;
        case 0x15b938u: goto label_15b938;
        case 0x15b93cu: goto label_15b93c;
        case 0x15b940u: goto label_15b940;
        case 0x15b944u: goto label_15b944;
        case 0x15b948u: goto label_15b948;
        case 0x15b94cu: goto label_15b94c;
        case 0x15b950u: goto label_15b950;
        case 0x15b954u: goto label_15b954;
        case 0x15b958u: goto label_15b958;
        case 0x15b95cu: goto label_15b95c;
        case 0x15b960u: goto label_15b960;
        case 0x15b964u: goto label_15b964;
        case 0x15b968u: goto label_15b968;
        case 0x15b96cu: goto label_15b96c;
        case 0x15b970u: goto label_15b970;
        case 0x15b974u: goto label_15b974;
        case 0x15b978u: goto label_15b978;
        case 0x15b97cu: goto label_15b97c;
        case 0x15b980u: goto label_15b980;
        case 0x15b984u: goto label_15b984;
        case 0x15b988u: goto label_15b988;
        case 0x15b98cu: goto label_15b98c;
        case 0x15b990u: goto label_15b990;
        case 0x15b994u: goto label_15b994;
        case 0x15b998u: goto label_15b998;
        case 0x15b99cu: goto label_15b99c;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9a4u: goto label_15b9a4;
        case 0x15b9a8u: goto label_15b9a8;
        case 0x15b9acu: goto label_15b9ac;
        case 0x15b9b0u: goto label_15b9b0;
        case 0x15b9b4u: goto label_15b9b4;
        case 0x15b9b8u: goto label_15b9b8;
        case 0x15b9bcu: goto label_15b9bc;
        case 0x15b9c0u: goto label_15b9c0;
        case 0x15b9c4u: goto label_15b9c4;
        case 0x15b9c8u: goto label_15b9c8;
        case 0x15b9ccu: goto label_15b9cc;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15b9d4u: goto label_15b9d4;
        case 0x15b9d8u: goto label_15b9d8;
        case 0x15b9dcu: goto label_15b9dc;
        case 0x15b9e0u: goto label_15b9e0;
        case 0x15b9e4u: goto label_15b9e4;
        case 0x15b9e8u: goto label_15b9e8;
        case 0x15b9ecu: goto label_15b9ec;
        case 0x15b9f0u: goto label_15b9f0;
        case 0x15b9f4u: goto label_15b9f4;
        case 0x15b9f8u: goto label_15b9f8;
        case 0x15b9fcu: goto label_15b9fc;
        case 0x15ba00u: goto label_15ba00;
        case 0x15ba04u: goto label_15ba04;
        case 0x15ba08u: goto label_15ba08;
        case 0x15ba0cu: goto label_15ba0c;
        case 0x15ba10u: goto label_15ba10;
        case 0x15ba14u: goto label_15ba14;
        case 0x15ba18u: goto label_15ba18;
        case 0x15ba1cu: goto label_15ba1c;
        case 0x15ba20u: goto label_15ba20;
        case 0x15ba24u: goto label_15ba24;
        case 0x15ba28u: goto label_15ba28;
        case 0x15ba2cu: goto label_15ba2c;
        case 0x15ba30u: goto label_15ba30;
        case 0x15ba34u: goto label_15ba34;
        case 0x15ba38u: goto label_15ba38;
        case 0x15ba3cu: goto label_15ba3c;
        case 0x15ba40u: goto label_15ba40;
        case 0x15ba44u: goto label_15ba44;
        case 0x15ba48u: goto label_15ba48;
        case 0x15ba4cu: goto label_15ba4c;
        case 0x15ba50u: goto label_15ba50;
        case 0x15ba54u: goto label_15ba54;
        case 0x15ba58u: goto label_15ba58;
        case 0x15ba5cu: goto label_15ba5c;
        case 0x15ba60u: goto label_15ba60;
        case 0x15ba64u: goto label_15ba64;
        case 0x15ba68u: goto label_15ba68;
        case 0x15ba6cu: goto label_15ba6c;
        case 0x15ba70u: goto label_15ba70;
        case 0x15ba74u: goto label_15ba74;
        case 0x15ba78u: goto label_15ba78;
        case 0x15ba7cu: goto label_15ba7c;
        case 0x15ba80u: goto label_15ba80;
        case 0x15ba84u: goto label_15ba84;
        case 0x15ba88u: goto label_15ba88;
        case 0x15ba8cu: goto label_15ba8c;
        case 0x15ba90u: goto label_15ba90;
        case 0x15ba94u: goto label_15ba94;
        case 0x15ba98u: goto label_15ba98;
        case 0x15ba9cu: goto label_15ba9c;
        default: break;
    }

    ctx->pc = 0x15b918u;

label_15b918:
    // 0x15b918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15b91c:
    // 0x15b91c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15b920:
    // 0x15b920: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15b924:
    // 0x15b924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b928:
    // 0x15b928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15b928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b92c:
    // 0x15b92c: 0x8c455d80  lw          $a1, 0x5D80($v0)
    ctx->pc = 0x15b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15b930:
    // 0x15b930: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b934:
    // 0x15b934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b938:
    // 0x15b938: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15b93c:
    // 0x15b93c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15b940:
    // 0x15b940: 0xac64c72c  sw          $a0, -0x38D4($v1)
    ctx->pc = 0x15b940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952748), GPR_U32(ctx, 4));
label_15b944:
    // 0x15b944: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_15b948:
    if (ctx->pc == 0x15B948u) {
        ctx->pc = 0x15B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B944u;
        // 0x15b948: 0xac44c724  sw          $a0, -0x38DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B94Cu;
        goto label_15b94c;
    }
    ctx->pc = 0x15B944u;
    {
        const bool branch_taken_0x15b944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B944u;
        // 0x15b948: 0xac44c724  sw          $a0, -0x38DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b944) {
            ctx->pc = 0x15B954u;
            goto label_15b954;
        }
    }
    ctx->pc = 0x15B94Cu;
label_15b94c:
    // 0x15b94c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b950:
    // 0x15b950: 0xac44c728  sw          $a0, -0x38D8($v0)
    ctx->pc = 0x15b950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952744), GPR_U32(ctx, 4));
label_15b954:
    // 0x15b954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b958:
    // 0x15b958: 0x8c42c730  lw          $v0, -0x38D0($v0)
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952752)));
label_15b95c:
    // 0x15b95c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_15b960:
    if (ctx->pc == 0x15B960u) {
        ctx->pc = 0x15B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B95Cu;
        // 0x15b960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B964u;
        goto label_15b964;
    }
    ctx->pc = 0x15B95Cu;
    {
        const bool branch_taken_0x15b95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B95Cu;
        // 0x15b960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b95c) {
            ctx->pc = 0x15B98Cu;
            goto label_15b98c;
        }
    }
    ctx->pc = 0x15B964u;
label_15b964:
    // 0x15b964: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
label_15b968:
    if (ctx->pc == 0x15B968u) {
        ctx->pc = 0x15B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B964u;
        // 0x15b968: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B96Cu;
        goto label_15b96c;
    }
    ctx->pc = 0x15B964u;
    {
        const bool branch_taken_0x15b964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b964) {
            ctx->pc = 0x15B968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B964u;
            // 0x15b968: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B980u;
            goto label_15b980;
        }
    }
    ctx->pc = 0x15B96Cu;
label_15b96c:
    // 0x15b96c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b970:
    // 0x15b970: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15b974:
    // 0x15b974: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_15b978:
    if (ctx->pc == 0x15B978u) {
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x240400b9  addiu       $a0, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B97Cu;
        goto label_15b97c;
    }
    ctx->pc = 0x15B974u;
    {
        const bool branch_taken_0x15b974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x240400b9  addiu       $a0, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b974) {
            ctx->pc = 0x15B980u;
            goto label_15b980;
        }
    }
    ctx->pc = 0x15B97Cu;
label_15b97c:
    // 0x15b97c: 0x240400b7  addiu       $a0, $zero, 0xB7
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_15b980:
    // 0x15b980: 0xc067b9c  jal         func_19EE70
label_15b984:
    if (ctx->pc == 0x15B984u) {
        ctx->pc = 0x15B988u;
        goto label_15b988;
    }
    ctx->pc = 0x15B980u;
    SET_GPR_U32(ctx, 31, 0x15B988u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B980u, 0x15B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B988u;
label_15b988:
    // 0x15b988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b98c:
    // 0x15b98c: 0xc067b9c  jal         func_19EE70
label_15b990:
    if (ctx->pc == 0x15B990u) {
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B994u;
        goto label_15b994;
    }
    ctx->pc = 0x15B98Cu;
    SET_GPR_U32(ctx, 31, 0x15B994u);
    ctx->pc = 0x15B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B98Cu;
    // 0x15b990: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B98Cu, 0x15B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B994u;
label_15b994:
    // 0x15b994: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15b998:
    // 0x15b998: 0xc067b9c  jal         func_19EE70
label_15b99c:
    if (ctx->pc == 0x15B99Cu) {
        ctx->pc = 0x15B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B998u;
        // 0x15b99c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9A0u;
        goto label_15b9a0;
    }
    ctx->pc = 0x15B998u;
    SET_GPR_U32(ctx, 31, 0x15B9A0u);
    ctx->pc = 0x15B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B998u;
    // 0x15b99c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B998u, 0x15B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9A0u;
label_15b9a0:
    // 0x15b9a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15b9a4:
    // 0x15b9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b9a8:
    // 0x15b9a8: 0x8e225d80  lw          $v0, 0x5D80($s1)
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
label_15b9ac:
    // 0x15b9ac: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x15b9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_15b9b0:
    // 0x15b9b0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x15b9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_15b9b4:
    // 0x15b9b4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x15b9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b9b8:
    // 0x15b9b8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x15b9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b9bc:
    // 0x15b9bc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_15b9c0:
    if (ctx->pc == 0x15B9C0u) {
        ctx->pc = 0x15B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9BCu;
        // 0x15b9c0: 0x8e225d80  lw          $v0, 0x5D80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9C4u;
        goto label_15b9c4;
    }
    ctx->pc = 0x15B9BCu;
    {
        const bool branch_taken_0x15b9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9BCu;
        // 0x15b9c0: 0x8e225d80  lw          $v0, 0x5D80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9bc) {
            ctx->pc = 0x15B9E8u;
            goto label_15b9e8;
        }
    }
    ctx->pc = 0x15B9C4u;
label_15b9c4:
    // 0x15b9c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b9c8:
    // 0x15b9c8: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952700)));
label_15b9cc:
    // 0x15b9cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_15b9d0:
    if (ctx->pc == 0x15B9D0u) {
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0x240400c1  addiu       $a0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9D4u;
        goto label_15b9d4;
    }
    ctx->pc = 0x15B9CCu;
    {
        const bool branch_taken_0x15b9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0x240400c1  addiu       $a0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9cc) {
            ctx->pc = 0x15B9D8u;
            goto label_15b9d8;
        }
    }
    ctx->pc = 0x15B9D4u;
label_15b9d4:
    // 0x15b9d4: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_15b9d8:
    // 0x15b9d8: 0xc067b9c  jal         func_19EE70
label_15b9dc:
    if (ctx->pc == 0x15B9DCu) {
        ctx->pc = 0x15B9E0u;
        goto label_15b9e0;
    }
    ctx->pc = 0x15B9D8u;
    SET_GPR_U32(ctx, 31, 0x15B9E0u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B9D8u, 0x15B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9E0u;
label_15b9e0:
    // 0x15b9e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_15b9e4:
    // 0x15b9e4: 0x8e225d80  lw          $v0, 0x5D80($s1)
    ctx->pc = 0x15b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
label_15b9e8:
    // 0x15b9e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15b9ec:
    if (ctx->pc == 0x15B9ECu) {
        ctx->pc = 0x15B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9E8u;
        // 0x15b9ec: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9F0u;
        goto label_15b9f0;
    }
    ctx->pc = 0x15B9E8u;
    {
        const bool branch_taken_0x15b9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9E8u;
        // 0x15b9ec: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9e8) {
            ctx->pc = 0x15BA10u;
            goto label_15ba10;
        }
    }
    ctx->pc = 0x15B9F0u;
label_15b9f0:
    // 0x15b9f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b9f4:
    // 0x15b9f4: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15b9f8:
    // 0x15b9f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15b9fc:
    if (ctx->pc == 0x15B9FCu) {
        ctx->pc = 0x15B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F8u;
        // 0x15b9fc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA00u;
        goto label_15ba00;
    }
    ctx->pc = 0x15B9F8u;
    {
        const bool branch_taken_0x15b9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F8u;
        // 0x15b9fc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9f8) {
            ctx->pc = 0x15BA10u;
            goto label_15ba10;
        }
    }
    ctx->pc = 0x15BA00u;
label_15ba00:
    // 0x15ba00: 0xc067b9c  jal         func_19EE70
label_15ba04:
    if (ctx->pc == 0x15BA04u) {
        ctx->pc = 0x15BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA00u;
        // 0x15ba04: 0x240400be  addiu       $a0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA08u;
        goto label_15ba08;
    }
    ctx->pc = 0x15BA00u;
    SET_GPR_U32(ctx, 31, 0x15BA08u);
    ctx->pc = 0x15BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA00u;
    // 0x15ba04: 0x240400be  addiu       $a0, $zero, 0xBE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15BA00u, 0x15BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA08u;
label_15ba08:
    // 0x15ba08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_15ba0c:
    // 0x15ba0c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15ba10:
    // 0x15ba10: 0x8e235d80  lw          $v1, 0x5D80($s1)
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
label_15ba14:
    // 0x15ba14: 0x2447f180  addiu       $a3, $v0, -0xE80
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_15ba18:
    // 0x15ba18: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x15ba18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_15ba1c:
    // 0x15ba1c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x15ba1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_15ba20:
    // 0x15ba20: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x15ba20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ba24:
    // 0x15ba24: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x15ba24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ba28:
    // 0x15ba28: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15ba2c:
    if (ctx->pc == 0x15BA2Cu) {
        ctx->pc = 0x15BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA28u;
        // 0x15ba2c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA30u;
        goto label_15ba30;
    }
    ctx->pc = 0x15BA28u;
    {
        const bool branch_taken_0x15ba28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA28u;
        // 0x15ba2c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba28) {
            ctx->pc = 0x15BA4Cu;
            goto label_15ba4c;
        }
    }
    ctx->pc = 0x15BA30u;
label_15ba30:
    // 0x15ba30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ba34:
    // 0x15ba34: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15ba38:
    // 0x15ba38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15ba3c:
    if (ctx->pc == 0x15BA3Cu) {
        ctx->pc = 0x15BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA38u;
        // 0x15ba3c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA40u;
        goto label_15ba40;
    }
    ctx->pc = 0x15BA38u;
    {
        const bool branch_taken_0x15ba38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA38u;
        // 0x15ba3c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba38) {
            ctx->pc = 0x15BA4Cu;
            goto label_15ba4c;
        }
    }
    ctx->pc = 0x15BA40u;
label_15ba40:
    // 0x15ba40: 0x2442b8d8  addiu       $v0, $v0, -0x4728
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949080));
label_15ba44:
    // 0x15ba44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_15ba48:
    // 0x15ba48: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15ba4c:
    // 0x15ba4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ba50:
    // 0x15ba50: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15ba54:
    // 0x15ba54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ba54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ba58:
    // 0x15ba58: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15ba58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ba5c:
    // 0x15ba5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ba60:
    // 0x15ba60: 0xc071c4a  jal         func_1C7128
label_15ba64:
    if (ctx->pc == 0x15BA64u) {
        ctx->pc = 0x15BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA60u;
        // 0x15ba64: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA68u;
        goto label_15ba68;
    }
    ctx->pc = 0x15BA60u;
    SET_GPR_U32(ctx, 31, 0x15BA68u);
    ctx->pc = 0x15BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA60u;
    // 0x15ba64: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15BA60u, 0x15BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA68u;
label_15ba68:
    // 0x15ba68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ba6c:
    // 0x15ba6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ba70:
    // 0x15ba70: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15ba74:
    // 0x15ba74: 0xac60c734  sw          $zero, -0x38CC($v1)
    ctx->pc = 0x15ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 0));
label_15ba78:
    // 0x15ba78: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15ba7c:
    // 0x15ba7c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15ba80:
    // 0x15ba80: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15ba84:
    // 0x15ba84: 0x60f809  jalr        $v1
label_15ba88:
    if (ctx->pc == 0x15BA88u) {
        ctx->pc = 0x15BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA84u;
        // 0x15ba88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA8Cu;
        goto label_15ba8c;
    }
    ctx->pc = 0x15BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BA8Cu);
        ctx->pc = 0x15BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA84u;
        // 0x15ba88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA84u, 0x15BA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15ba8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ba90:
    // 0x15ba90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15ba90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15ba94:
    // 0x15ba94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ba98:
    // 0x15ba98: 0x3e00008  jr          $ra
label_15ba9c:
    if (ctx->pc == 0x15BA9Cu) {
        ctx->pc = 0x15BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA98u;
        // 0x15ba9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAA0u;
        goto label_fallthrough_0x15ba98;
    }
    ctx->pc = 0x15BA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA98u;
        // 0x15ba9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ba98:
    ctx->pc = 0x15BAA0u;
}
