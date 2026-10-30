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

// Function: sub_001C7928
// Address: 0x1c7928 - 0x1c7e40
void sub_001C7928_0x1c7928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7928_0x1c7928");
#endif

    switch (ctx->pc) {
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e10u: goto label_1c7e10;
        default: break;
    }

    ctx->pc = 0x1c7928u;

    // 0x1c7928: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1c7928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1c792c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c7930: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c7930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1c7934: 0x240300d9  addiu       $v1, $zero, 0xD9
    ctx->pc = 0x1c7934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x1c7938: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1c7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x1c793c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c793cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7940: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1c7940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1c7944: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1c7944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1c7948: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c794c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1c794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1c7950: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7954: 0x8c57ea40  lw          $s7, -0x15C0($v0)
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x50EA40u));
    // 0x1c7958: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c795c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1c795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1c7960: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1c7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1c7964: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x1c7964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x1c7968: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x1c7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x1c796c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1c796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1c7970: 0x6a220383  ldl         $v0, 0x383($s1)
    ctx->pc = 0x1c7970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 899); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c7974: 0x6e22037c  ldr         $v0, 0x37C($s1)
    ctx->pc = 0x1c7974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 892); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c7978: 0x6a24038b  ldl         $a0, 0x38B($s1)
    ctx->pc = 0x1c7978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c797c: 0x6e240384  ldr         $a0, 0x384($s1)
    ctx->pc = 0x1c797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c7980: 0xb3a20107  sdl         $v0, 0x107($sp)
    ctx->pc = 0x1c7980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7984: 0xb7a20100  sdr         $v0, 0x100($sp)
    ctx->pc = 0x1c7984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7988: 0xb3a4010f  sdl         $a0, 0x10F($sp)
    ctx->pc = 0x1c7988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c798c: 0xb7a40108  sdr         $a0, 0x108($sp)
    ctx->pc = 0x1c798cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7990: 0xa3a30120  sb          $v1, 0x120($sp)
    ctx->pc = 0x1c7990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7994: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c7998: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x1c7998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x1c799c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c79a0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c79a4: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1c79a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c79a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c79a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c79ac: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1c79acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c79b0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c79b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79b4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1c79b8:
    // 0x1c79b8: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    // 0x1c79bc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1c79c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c79c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c79c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C79C4u;
    {
        const bool branch_taken_0x1c79c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79c4) {
            ctx->pc = 0x1C79F0u;
            goto label_1c79f0;
        }
    }
    ctx->pc = 0x1C79CCu;
    // 0x1c79cc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c79d0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1c79d4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1C79D4u;
    SET_GPR_U32(ctx, 31, 0x1C79DCu);
    ctx->pc = 0x1C79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79D4u;
    // 0x1c79d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C79D4u, 0x1C79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79DCu;
label_1c79dc:
    // 0x1c79dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c79dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79e0: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x1c79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x1c79e4: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x1c79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x1c79e8: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C79E8u;
    {
        const bool branch_taken_0x1c79e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c79e8) {
            ctx->pc = 0x1C79ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C79E8u;
            // 0x1c79ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c79b8;
        }
    }
    ctx->pc = 0x1C79F0u;
label_1c79f0:
    // 0x1c79f0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C79F0u;
    {
        const bool branch_taken_0x1c79f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79F0u;
        // 0x1c79f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79f0) {
            ctx->pc = 0x1C7A08u;
            goto label_1c7a08;
        }
    }
    ctx->pc = 0x1C79F8u;
    // 0x1c79f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c79fc: 0xc108a66  jal         func_422998
    ctx->pc = 0x1C79FCu;
    SET_GPR_U32(ctx, 31, 0x1C7A04u);
    ctx->pc = 0x1C7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79FCu;
    // 0x1c7a00: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422998u, 0x1C79FCu, 0x1C7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A04u;
label_1c7a04:
    // 0x1c7a04: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c7a04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a08:
    // 0x1c7a08: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x1c7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1c7a0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7A0Cu;
    {
        const bool branch_taken_0x1c7a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a0c) {
            ctx->pc = 0x1C7A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A0Cu;
            // 0x1c7a10: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A20u;
            goto label_1c7a20;
        }
    }
    ctx->pc = 0x1C7A14u;
    // 0x1c7a14: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7A14u;
    {
        const bool branch_taken_0x1c7a14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a14) {
            ctx->pc = 0x1C7A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7A14u;
            // 0x1c7a18: 0xae350368  sw          $s5, 0x368($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A1Cu;
            goto label_1c7a1c;
        }
    }
    ctx->pc = 0x1C7A1Cu;
label_1c7a1c:
    // 0x1c7a1c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x1c7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_1c7a20:
    // 0x1c7a20: 0x105500ce  beq         $v0, $s5, . + 4 + (0xCE << 2)
    ctx->pc = 0x1C7A20u;
    {
        const bool branch_taken_0x1c7a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A20u;
        // 0x1c7a24: 0x26320230  addiu       $s2, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a20) {
            ctx->pc = 0x1C7D5Cu;
            goto label_1c7d5c;
        }
    }
    ctx->pc = 0x1C7A28u;
    // 0x1c7a28: 0x8e840380  lw          $a0, 0x380($s4)
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x1c7a2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c7a30: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1c7a34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7a38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c7a3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c7a40: 0xac60411c  sw          $zero, 0x411C($v1)
    ctx->pc = 0x1c7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 0));
    // 0x1c7a44: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x1c7a48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7A48u;
    {
        const bool branch_taken_0x1c7a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A48u;
        // 0x1c7a4c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a48) {
            ctx->pc = 0x1C7A60u;
            goto label_1c7a60;
        }
    }
    ctx->pc = 0x1C7A50u;
    // 0x1c7a50: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x1c7a54: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1c7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c7a58: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c7a5c: 0xae220364  sw          $v0, 0x364($s1)
    ctx->pc = 0x1c7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 2));
label_1c7a60:
    // 0x1c7a60: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x1c7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x1c7a64: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x1c7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x1c7a68: 0x8c730048  lw          $s3, 0x48($v1)
    ctx->pc = 0x1c7a68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c7a6c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x1c7a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1c7a70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7A70u;
    {
        const bool branch_taken_0x1c7a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A70u;
        // 0x1c7a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a70) {
            ctx->pc = 0x1C7A94u;
            goto label_1c7a94;
        }
    }
    ctx->pc = 0x1C7A78u;
    // 0x1c7a78: 0xae35036c  sw          $s5, 0x36C($s1)
    ctx->pc = 0x1c7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 21));
    // 0x1c7a7c: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x1c7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
    // 0x1c7a80: 0xc07346e  jal         func_1CD1B8
    ctx->pc = 0x1C7A80u;
    SET_GPR_U32(ctx, 31, 0x1C7A88u);
    ctx->pc = 0x1C7A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A80u;
    // 0x1c7a84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B8u, 0x1C7A80u, 0x1C7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A88u;
label_1c7a88:
    // 0x1c7a88: 0xae200370  sw          $zero, 0x370($s1)
    ctx->pc = 0x1c7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 0));
    // 0x1c7a8c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1C7A8Cu;
    {
        const bool branch_taken_0x1c7a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A8Cu;
        // 0x1c7a90: 0xae200374  sw          $zero, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a8c) {
            ctx->pc = 0x1C7D5Cu;
            goto label_1c7d5c;
        }
    }
    ctx->pc = 0x1C7A94u;
label_1c7a94:
    // 0x1c7a94: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x1c7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x1c7a98: 0x2a29023  subu        $s2, $s5, $v0
    ctx->pc = 0x1c7a98u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c7a9c: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7A9Cu;
    {
        const bool branch_taken_0x1c7a9c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A9Cu;
        // 0x1c7aa0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a9c) {
            ctx->pc = 0x1C7AC4u;
            goto label_1c7ac4;
        }
    }
    ctx->pc = 0x1C7AA4u;
    // 0x1c7aa4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c7aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x1c7aa8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c7aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7aac: 0x24c653b8  addiu       $a2, $a2, 0x53B8
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21432));
    // 0x1c7ab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ab4: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C7AB4u;
    SET_GPR_U32(ctx, 31, 0x1C7ABCu);
    ctx->pc = 0x1C7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AB4u;
    // 0x1c7ab8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C7AB4u, 0x1C7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ABCu;
label_1c7abc:
    // 0x1c7abc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1C7ABCu;
    {
        const bool branch_taken_0x1c7abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ABCu;
        // 0x1c7ac0: 0x26300230  addiu       $s0, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7abc) {
            ctx->pc = 0x1C7D14u;
            goto label_1c7d14;
        }
    }
    ctx->pc = 0x1C7AC4u;
label_1c7ac4:
    // 0x1c7ac4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ac8: 0x2450e490  addiu       $s0, $v0, -0x1B70
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
    // 0x1c7acc: 0xc108a90  jal         func_422A40
    ctx->pc = 0x1C7ACCu;
    SET_GPR_U32(ctx, 31, 0x1C7AD4u);
    ctx->pc = 0x1C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ACCu;
    // 0x1c7ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422A40u, 0x1C7ACCu, 0x1C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AD4u;
label_1c7ad4:
    // 0x1c7ad4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7AD4u;
    {
        const bool branch_taken_0x1c7ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ad4) {
            ctx->pc = 0x1C7AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7AD4u;
            // 0x1c7ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AF8u;
            goto label_1c7af8;
        }
    }
    ctx->pc = 0x1C7ADCu;
    // 0x1c7adc: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x1c7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1c7ae0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7AE0u;
    {
        const bool branch_taken_0x1c7ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AE0u;
        // 0x1c7ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ae0) {
            ctx->pc = 0x1C7AF0u;
            goto label_1c7af0;
        }
    }
    ctx->pc = 0x1C7AE8u;
    // 0x1c7ae8: 0xae220378  sw          $v0, 0x378($s1)
    ctx->pc = 0x1c7ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 2));
    // 0x1c7aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7af0:
    // 0x1c7af0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C7AF0u;
    {
        const bool branch_taken_0x1c7af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AF0u;
        // 0x1c7af4: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7af0) {
            ctx->pc = 0x1C7B20u;
            goto label_1c7b20;
        }
    }
    ctx->pc = 0x1C7AF8u;
label_1c7af8:
    // 0x1c7af8: 0xc108a9a  jal         func_422A68
    ctx->pc = 0x1C7AF8u;
    SET_GPR_U32(ctx, 31, 0x1C7B00u);
    ctx->pc = 0x1C7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AF8u;
    // 0x1c7afc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422A68u, 0x1C7AF8u, 0x1C7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B00u;
label_1c7b00:
    // 0x1c7b00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7B00u;
    {
        const bool branch_taken_0x1c7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b00) {
            ctx->pc = 0x1C7B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B00u;
            // 0x1c7b04: 0x8e230370  lw          $v1, 0x370($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7B24u;
            goto label_1c7b24;
        }
    }
    ctx->pc = 0x1C7B08u;
    // 0x1c7b08: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1c7b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7B0Cu;
    {
        const bool branch_taken_0x1c7b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B0Cu;
        // 0x1c7b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b0c) {
            ctx->pc = 0x1C7B1Cu;
            goto label_1c7b1c;
        }
    }
    ctx->pc = 0x1C7B14u;
    // 0x1c7b14: 0xae220378  sw          $v0, 0x378($s1)
    ctx->pc = 0x1c7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 2));
    // 0x1c7b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7b1c:
    // 0x1c7b1c: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x1c7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
label_1c7b20:
    // 0x1c7b20: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1c7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_1c7b24:
    // 0x1c7b24: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7B24u;
    {
        const bool branch_taken_0x1c7b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b24) {
            ctx->pc = 0x1C7B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B24u;
            // 0x1c7b28: 0x8e220364  lw          $v0, 0x364($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7B3Cu;
            goto label_1c7b3c;
        }
    }
    ctx->pc = 0x1C7B2Cu;
    // 0x1c7b2c: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x1c7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c7b30: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1C7B30u;
    {
        const bool branch_taken_0x1c7b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B30u;
        // 0x1c7b34: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b30) {
            ctx->pc = 0x1C7CFCu;
            goto label_1c7cfc;
        }
    }
    ctx->pc = 0x1C7B38u;
    // 0x1c7b38: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x1c7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_1c7b3c:
    // 0x1c7b3c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1c7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c7b40: 0x2c42015f  sltiu       $v0, $v0, 0x15F
    ctx->pc = 0x1c7b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)351) ? 1 : 0);
    // 0x1c7b44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C7B44u;
    {
        const bool branch_taken_0x1c7b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B44u;
        // 0x1c7b48: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b44) {
            ctx->pc = 0x1C7BD8u;
            goto label_1c7bd8;
        }
    }
    ctx->pc = 0x1C7B4Cu;
    // 0x1c7b4c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7B4Cu;
    {
        const bool branch_taken_0x1c7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b4c) {
            ctx->pc = 0x1C7B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B4Cu;
            // 0x1c7b50: 0x8e220374  lw          $v0, 0x374($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7B80u;
            goto label_1c7b80;
        }
    }
    ctx->pc = 0x1C7B54u;
    // 0x1c7b54: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C7B54u;
    SET_GPR_U32(ctx, 31, 0x1C7B5Cu);
    ctx->pc = 0x1C7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B54u;
    // 0x1c7b58: 0x24040183  addiu       $a0, $zero, 0x183 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7B54u, 0x1C7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B5Cu;
label_1c7b5c:
    // 0x1c7b5c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B64u);
    ctx->pc = 0x1C7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B5Cu;
    // 0x1c7b60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C7B5Cu, 0x1C7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B64u;
label_1c7b64:
    // 0x1c7b64: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1c7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7b68: 0x24040183  addiu       $a0, $zero, 0x183
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x1c7b6c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B74u);
    ctx->pc = 0x1C7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B6Cu;
    // 0x1c7b70: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7B6Cu, 0x1C7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B74u;
label_1c7b74:
    // 0x1c7b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7B78u;
    {
        const bool branch_taken_0x1c7b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B78u;
        // 0x1c7b7c: 0x24040183  addiu       $a0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b78) {
            ctx->pc = 0x1C7BB0u;
            goto label_1c7bb0;
        }
    }
    ctx->pc = 0x1C7B80u;
label_1c7b80:
    // 0x1c7b80: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C7B80u;
    {
        const bool branch_taken_0x1c7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b80) {
            ctx->pc = 0x1C7B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B80u;
            // 0x1c7b84: 0x8e220364  lw          $v0, 0x364($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7BF0u;
            goto label_1c7bf0;
        }
    }
    ctx->pc = 0x1C7B88u;
    // 0x1c7b88: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C7B88u;
    SET_GPR_U32(ctx, 31, 0x1C7B90u);
    ctx->pc = 0x1C7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B88u;
    // 0x1c7b8c: 0x24040184  addiu       $a0, $zero, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7B88u, 0x1C7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B90u;
label_1c7b90:
    // 0x1c7b90: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C7B90u;
    SET_GPR_U32(ctx, 31, 0x1C7B98u);
    ctx->pc = 0x1C7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B90u;
    // 0x1c7b94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C7B90u, 0x1C7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B98u;
label_1c7b98:
    // 0x1c7b98: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1c7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7b9c: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x1c7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x1c7ba0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C7BA0u;
    SET_GPR_U32(ctx, 31, 0x1C7BA8u);
    ctx->pc = 0x1C7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BA0u;
    // 0x1c7ba4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7BA0u, 0x1C7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA8u;
label_1c7ba8:
    // 0x1c7ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bac: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
label_1c7bb0:
    // 0x1c7bb0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C7BB0u;
    SET_GPR_U32(ctx, 31, 0x1C7BB8u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C7BB0u, 0x1C7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BB8u;
label_1c7bb8:
    // 0x1c7bb8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C7BB8u;
    SET_GPR_U32(ctx, 31, 0x1C7BC0u);
    ctx->pc = 0x1C7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BB8u;
    // 0x1c7bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C7BB8u, 0x1C7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BC0u;
label_1c7bc0:
    // 0x1c7bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c7bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bc8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1C7BC8u;
    SET_GPR_U32(ctx, 31, 0x1C7BD0u);
    ctx->pc = 0x1C7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BC8u;
    // 0x1c7bcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1C7BC8u, 0x1C7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BD0u;
label_1c7bd0:
    // 0x1c7bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7BD0u;
    {
        const bool branch_taken_0x1c7bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BD0u;
        // 0x1c7bd4: 0x8e220364  lw          $v0, 0x364($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bd0) {
            ctx->pc = 0x1C7BF0u;
            goto label_1c7bf0;
        }
    }
    ctx->pc = 0x1C7BD8u;
label_1c7bd8:
    // 0x1c7bd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c7bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bdc: 0x24c653c0  addiu       $a2, $a2, 0x53C0
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21440));
    // 0x1c7be0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7be4: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C7BE4u;
    SET_GPR_U32(ctx, 31, 0x1C7BECu);
    ctx->pc = 0x1C7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BE4u;
    // 0x1c7be8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C7BE4u, 0x1C7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BECu;
label_1c7bec:
    // 0x1c7bec: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x1c7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_1c7bf0:
    // 0x1c7bf0: 0x6a270383  ldl         $a3, 0x383($s1)
    ctx->pc = 0x1c7bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 899); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c7bf4: 0x6e27037c  ldr         $a3, 0x37C($s1)
    ctx->pc = 0x1c7bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 892); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c7bf8: 0x6a23038b  ldl         $v1, 0x38B($s1)
    ctx->pc = 0x1c7bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7bfc: 0x6e230384  ldr         $v1, 0x384($s1)
    ctx->pc = 0x1c7bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c7c00: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x1c7c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7c04: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x1c7c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7c08: 0xb3a3011f  sdl         $v1, 0x11F($sp)
    ctx->pc = 0x1c7c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7c0c: 0xb7a30118  sdr         $v1, 0x118($sp)
    ctx->pc = 0x1c7c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7c10: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c7c14: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c7c18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7C18u;
    {
        const bool branch_taken_0x1c7c18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C18u;
        // 0x1c7c1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c18) {
            ctx->pc = 0x1C7C34u;
            goto label_1c7c34;
        }
    }
    ctx->pc = 0x1C7C20u;
    // 0x1c7c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c24: 0x0  nop
    ctx->pc = 0x1c7c24u;
    // NOP
    // 0x1c7c28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7C2Cu;
    {
        const bool branch_taken_0x1c7c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C2Cu;
        // 0x1c7c30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c2c) {
            ctx->pc = 0x1C7C50u;
            goto label_1c7c50;
        }
    }
    ctx->pc = 0x1C7C34u;
label_1c7c34:
    // 0x1c7c34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c7c38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c7c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c40: 0x0  nop
    ctx->pc = 0x1c7c40u;
    // NOP
    // 0x1c7c44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7c48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c7c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1c7c4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c7c50:
    // 0x1c7c50: 0xc6230380  lwc1        $f3, 0x380($s1)
    ctx->pc = 0x1c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7c54: 0xc440ea3c  lwc1        $f0, -0x15C4($v0)
    ctx->pc = 0x1c7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7c58: 0xc6220388  lwc1        $f2, 0x388($s1)
    ctx->pc = 0x1c7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7c5c: 0x0  nop
    ctx->pc = 0x1c7c5cu;
    // NOP
    // 0x1c7c60: 0x0  nop
    ctx->pc = 0x1c7c60u;
    // NOP
    // 0x1c7c64: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7c64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7c6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c7c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c7c70: 0xc621037c  lwc1        $f1, 0x37C($s1)
    ctx->pc = 0x1c7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7c74: 0x46040129  min.s       $f4, $f0, $f4
    ctx->pc = 0x1c7c74u;
    ctx->f[4] = std::min(ctx->f[0], ctx->f[4]);
    // 0x1c7c78: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1c7c78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1c7c7c: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1c7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    // 0x1c7c80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1c7c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1c7c84: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1c7c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1c7c88: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x1c7c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1c7c8c: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x1c7c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1c7c90: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1c7c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1c7c94: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1c7c98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7C98u;
    {
        const bool branch_taken_0x1c7c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C98u;
        // 0x1c7c9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c98) {
            ctx->pc = 0x1C7CA8u;
            goto label_1c7ca8;
        }
    }
    ctx->pc = 0x1C7CA0u;
    // 0x1c7ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7CA0u;
    {
        const bool branch_taken_0x1c7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CA0u;
        // 0x1c7ca4: 0xc440ea44  lwc1        $f0, -0x15BC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ca0) {
            ctx->pc = 0x1C7CB0u;
            goto label_1c7cb0;
        }
    }
    ctx->pc = 0x1C7CA8u;
label_1c7ca8:
    // 0x1c7ca8: 0xc6200384  lwc1        $f0, 0x384($s1)
    ctx->pc = 0x1c7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7cac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c7cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1c7cb0:
    // 0x1c7cb0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1c7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1c7cb4: 0x6ba60117  ldl         $a2, 0x117($sp)
    ctx->pc = 0x1c7cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c7cb8: 0x6fa60110  ldr         $a2, 0x110($sp)
    ctx->pc = 0x1c7cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c7cbc: 0x6ba7011f  ldl         $a3, 0x11F($sp)
    ctx->pc = 0x1c7cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c7cc0: 0x6fa70118  ldr         $a3, 0x118($sp)
    ctx->pc = 0x1c7cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c7cc4: 0xb3a60107  sdl         $a2, 0x107($sp)
    ctx->pc = 0x1c7cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7cc8: 0xb7a60100  sdr         $a2, 0x100($sp)
    ctx->pc = 0x1c7cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7ccc: 0xb3a7010f  sdl         $a3, 0x10F($sp)
    ctx->pc = 0x1c7cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7cd0: 0xb7a70108  sdr         $a3, 0x108($sp)
    ctx->pc = 0x1c7cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7cd4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1c7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c7cd8: 0xa3a30124  sb          $v1, 0x124($sp)
    ctx->pc = 0x1c7cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7cdc: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x1c7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x1c7ce0: 0x240400bf  addiu       $a0, $zero, 0xBF
    ctx->pc = 0x1c7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1c7ce4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c7ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7ce8: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x1c7ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7cec: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1c7cecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7cf0: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x1c7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1c7cf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7CF4u;
    {
        const bool branch_taken_0x1c7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CF4u;
        // 0x1c7cf8: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cf4) {
            ctx->pc = 0x1C7D10u;
            goto label_1c7d10;
        }
    }
    ctx->pc = 0x1C7CFCu;
label_1c7cfc:
    // 0x1c7cfc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c7cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d00: 0x24c653c0  addiu       $a2, $a2, 0x53C0
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21440));
    // 0x1c7d04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d08: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C7D08u;
    SET_GPR_U32(ctx, 31, 0x1C7D10u);
    ctx->pc = 0x1C7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D08u;
    // 0x1c7d0c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C7D08u, 0x1C7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D10u;
label_1c7d10:
    // 0x1c7d10: 0x26300230  addiu       $s0, $s1, 0x230
    ctx->pc = 0x1c7d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_1c7d14:
    // 0x1c7d14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c7d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d18: 0x6ba60107  ldl         $a2, 0x107($sp)
    ctx->pc = 0x1c7d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c7d1c: 0x6fa60100  ldr         $a2, 0x100($sp)
    ctx->pc = 0x1c7d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c7d20: 0x6ba7010f  ldl         $a3, 0x10F($sp)
    ctx->pc = 0x1c7d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c7d24: 0x6fa70108  ldr         $a3, 0x108($sp)
    ctx->pc = 0x1c7d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c7d28: 0xb22602af  sdl         $a2, 0x2AF($s1)
    ctx->pc = 0x1c7d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7d2c: 0xb62602a8  sdr         $a2, 0x2A8($s1)
    ctx->pc = 0x1c7d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7d30: 0xb22702b7  sdl         $a3, 0x2B7($s1)
    ctx->pc = 0x1c7d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7d34: 0xb62702b0  sdr         $a3, 0x2B0($s1)
    ctx->pc = 0x1c7d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7d38: 0xc073472  jal         func_1CD1C8
    ctx->pc = 0x1C7D38u;
    SET_GPR_U32(ctx, 31, 0x1C7D40u);
    ctx->pc = 0x1C7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D38u;
    // 0x1c7d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1C7D38u, 0x1C7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D40u;
label_1c7d40:
    // 0x1c7d40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c7d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d44: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1C7D44u;
    SET_GPR_U32(ctx, 31, 0x1C7D4Cu);
    ctx->pc = 0x1C7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D44u;
    // 0x1c7d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1C7D44u, 0x1C7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D4Cu;
label_1c7d4c:
    // 0x1c7d4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1c7d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d54: 0xc07346e  jal         func_1CD1B8
    ctx->pc = 0x1C7D54u;
    SET_GPR_U32(ctx, 31, 0x1C7D5Cu);
    ctx->pc = 0x1C7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D54u;
    // 0x1c7d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B8u, 0x1C7D54u, 0x1C7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D5Cu;
label_1c7d5c:
    // 0x1c7d5c: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1c7d60: 0x10550015  beq         $v0, $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7D60u;
    {
        const bool branch_taken_0x1c7d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D60u;
        // 0x1c7d64: 0x8e220364  lw          $v0, 0x364($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d60) {
            ctx->pc = 0x1C7DB8u;
            goto label_1c7db8;
        }
    }
    ctx->pc = 0x1C7D68u;
    // 0x1c7d68: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7D68u;
    {
        const bool branch_taken_0x1c7d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D68u;
        // 0x1c7d6c: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d68) {
            ctx->pc = 0x1C7DD0u;
            goto label_1c7dd0;
        }
    }
    ctx->pc = 0x1C7D70u;
    // 0x1c7d70: 0x8e830380  lw          $v1, 0x380($s4)
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x1c7d74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c7d78: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1c7d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c7d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7d84: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c7d88: 0xac80411c  sw          $zero, 0x411C($a0)
    ctx->pc = 0x1c7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16668), GPR_U32(ctx, 0));
    // 0x1c7d8c: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x1c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1c7d90: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x1c7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c7d94: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7D94u;
    {
        const bool branch_taken_0x1c7d94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D94u;
        // 0x1c7d98: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d94) {
            ctx->pc = 0x1C7DA4u;
            goto label_1c7da4;
        }
    }
    ctx->pc = 0x1C7D9Cu;
    // 0x1c7d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7D9Cu;
    {
        const bool branch_taken_0x1c7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D9Cu;
        // 0x1c7da0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d9c) {
            ctx->pc = 0x1C7DA8u;
            goto label_1c7da8;
        }
    }
    ctx->pc = 0x1C7DA4u;
label_1c7da4:
    // 0x1c7da4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c7da8:
    // 0x1c7da8: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x1c7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1c7dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7db0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7DB0u;
    {
        const bool branch_taken_0x1c7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DB0u;
        // 0x1c7db4: 0xae220368  sw          $v0, 0x368($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7db0) {
            ctx->pc = 0x1C7DCCu;
            goto label_1c7dcc;
        }
    }
    ctx->pc = 0x1C7DB8u;
label_1c7db8:
    // 0x1c7db8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7DB8u;
    {
        const bool branch_taken_0x1c7db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7db8) {
            ctx->pc = 0x1C7DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7DB8u;
            // 0x1c7dbc: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7DD0u;
            goto label_1c7dd0;
        }
    }
    ctx->pc = 0x1C7DC0u;
    // 0x1c7dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dc4: 0xc07346e  jal         func_1CD1B8
    ctx->pc = 0x1C7DC4u;
    SET_GPR_U32(ctx, 31, 0x1C7DCCu);
    ctx->pc = 0x1C7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DC4u;
    // 0x1c7dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B8u, 0x1C7DC4u, 0x1C7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DCCu;
label_1c7dcc:
    // 0x1c7dcc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1c7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1c7dd0:
    // 0x1c7dd0: 0x8e270368  lw          $a3, 0x368($s1)
    ctx->pc = 0x1c7dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1c7dd4: 0x248653c8  addiu       $a2, $a0, 0x53C8
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 21448));
    // 0x1c7dd8: 0x26300300  addiu       $s0, $s1, 0x300
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1c7ddc: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1c7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1c7de0: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C7DE0u;
    SET_GPR_U32(ctx, 31, 0x1C7DE8u);
    ctx->pc = 0x1C7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DE0u;
    // 0x1c7de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C7DE0u, 0x1C7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DE8u;
label_1c7de8:
    // 0x1c7de8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c7de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c7dec: 0xc06ed28  jal         func_1BB4A0
    ctx->pc = 0x1C7DECu;
    SET_GPR_U32(ctx, 31, 0x1C7DF4u);
    ctx->pc = 0x1C7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DECu;
    // 0x1c7df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB4A0u, 0x1C7DECu, 0x1C7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DF4u;
label_1c7df4:
    // 0x1c7df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7df8: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1C7DF8u;
    SET_GPR_U32(ctx, 31, 0x1C7E00u);
    ctx->pc = 0x1C7DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DF8u;
    // 0x1c7dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1C7DF8u, 0x1C7E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E00u;
label_1c7e00:
    // 0x1c7e00: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1C7E00u;
    SET_GPR_U32(ctx, 31, 0x1C7E08u);
    ctx->pc = 0x1C7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E00u;
    // 0x1c7e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1C7E00u, 0x1C7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E08u;
label_1c7e08:
    // 0x1c7e08: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1C7E08u;
    SET_GPR_U32(ctx, 31, 0x1C7E10u);
    ctx->pc = 0x1C7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E08u;
    // 0x1c7e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1C7E08u, 0x1C7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E10u;
label_1c7e10:
    // 0x1c7e10: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1c7e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c7e14: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c7e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c7e18: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1c7e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c7e1c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1c7e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c7e20: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1c7e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c7e24: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1c7e24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c7e28: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1c7e28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c7e2c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1c7e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c7e30: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1c7e30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c7e34: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1c7e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c7e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E38u;
        // 0x1c7e3c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7E40u;
}
