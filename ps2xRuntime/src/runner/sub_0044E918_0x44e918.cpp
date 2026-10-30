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

// Function: sub_0044E918
// Address: 0x44e918 - 0x44eae8
void sub_0044E918_0x44e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E918_0x44e918");
#endif

    ctx->pc = 0x44e918u;

    // 0x44e918: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x44e91c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x44e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44e920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44e924: 0x24680050  addiu       $t0, $v1, 0x50
    ctx->pc = 0x44e924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x44e928: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x44e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x44e92c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x44e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x44e930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E930u;
    {
        const bool branch_taken_0x44e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E930u;
        // 0x44e934: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e930) {
            ctx->pc = 0x44E948u;
            goto label_44e948;
        }
    }
    ctx->pc = 0x44E938u;
    // 0x44e938: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x44e938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x44e93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44e93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e940: 0x3e00008  jr          $ra
    ctx->pc = 0x44E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E940u;
        // 0x44e944: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E948u;
label_44e948:
    // 0x44e948: 0x10c2003a  beq         $a2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x44E948u;
    {
        const bool branch_taken_0x44e948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x44E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E948u;
        // 0x44e94c: 0x2cc20011  sltiu       $v0, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e948) {
            ctx->pc = 0x44EA34u;
            goto label_44ea34;
        }
    }
    ctx->pc = 0x44E950u;
    // 0x44e950: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x44E950u;
    {
        const bool branch_taken_0x44e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E950u;
        // 0x44e954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e950) {
            ctx->pc = 0x44E994u;
            goto label_44e994;
        }
    }
    ctx->pc = 0x44E958u;
    // 0x44e958: 0x10c20024  beq         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x44E958u;
    {
        const bool branch_taken_0x44e958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x44E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E958u;
        // 0x44e95c: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e958) {
            ctx->pc = 0x44E9ECu;
            goto label_44e9ec;
        }
    }
    ctx->pc = 0x44E960u;
    // 0x44e960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E960u;
    {
        const bool branch_taken_0x44e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E960u;
        // 0x44e964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e960) {
            ctx->pc = 0x44E978u;
            goto label_44e978;
        }
    }
    ctx->pc = 0x44E968u;
    // 0x44e968: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44E968u;
    {
        const bool branch_taken_0x44e968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x44e968) {
            ctx->pc = 0x44E9D4u;
            goto label_44e9d4;
        }
    }
    ctx->pc = 0x44E970u;
    // 0x44e970: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x44E970u;
    {
        const bool branch_taken_0x44e970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E970u;
        // 0x44e974: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e970) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44E978u;
label_44e978:
    // 0x44e978: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x44e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44e97c: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x44E97Cu;
    {
        const bool branch_taken_0x44e97c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x44E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E97Cu;
        // 0x44e980: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e97c) {
            ctx->pc = 0x44EA04u;
            goto label_44ea04;
        }
    }
    ctx->pc = 0x44E984u;
    // 0x44e984: 0x10c20025  beq         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x44E984u;
    {
        const bool branch_taken_0x44e984 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x44e984) {
            ctx->pc = 0x44EA1Cu;
            goto label_44ea1c;
        }
    }
    ctx->pc = 0x44E98Cu;
    // 0x44e98c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x44E98Cu;
    {
        const bool branch_taken_0x44e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E98Cu;
        // 0x44e990: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e98c) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44E994u;
label_44e994:
    // 0x44e994: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x44e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x44e998: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x44E998u;
    {
        const bool branch_taken_0x44e998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x44E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E998u;
        // 0x44e99c: 0x2cc20041  sltiu       $v0, $a2, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e998) {
            ctx->pc = 0x44EA64u;
            goto label_44ea64;
        }
    }
    ctx->pc = 0x44E9A0u;
    // 0x44e9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44E9A0u;
    {
        const bool branch_taken_0x44e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9A0u;
        // 0x44e9a4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9a0) {
            ctx->pc = 0x44E9B8u;
            goto label_44e9b8;
        }
    }
    ctx->pc = 0x44E9A8u;
    // 0x44e9a8: 0x10c20028  beq         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x44E9A8u;
    {
        const bool branch_taken_0x44e9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x44e9a8) {
            ctx->pc = 0x44EA4Cu;
            goto label_44ea4c;
        }
    }
    ctx->pc = 0x44E9B0u;
    // 0x44e9b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x44E9B0u;
    {
        const bool branch_taken_0x44e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9B0u;
        // 0x44e9b4: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9b0) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44E9B8u;
label_44e9b8:
    // 0x44e9b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x44e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x44e9bc: 0x10c2002f  beq         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x44E9BCu;
    {
        const bool branch_taken_0x44e9bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x44E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9BCu;
        // 0x44e9c0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9bc) {
            ctx->pc = 0x44EA7Cu;
            goto label_44ea7c;
        }
    }
    ctx->pc = 0x44E9C4u;
    // 0x44e9c4: 0x10c20033  beq         $a2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x44E9C4u;
    {
        const bool branch_taken_0x44e9c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x44e9c4) {
            ctx->pc = 0x44EA94u;
            goto label_44ea94;
        }
    }
    ctx->pc = 0x44E9CCu;
    // 0x44e9cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x44E9CCu;
    {
        const bool branch_taken_0x44e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9CCu;
        // 0x44e9d0: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9cc) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44E9D4u;
label_44e9d4:
    // 0x44e9d4: 0x6862005b  ldl         $v0, 0x5B($v1)
    ctx->pc = 0x44e9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44e9d8: 0x6c620054  ldr         $v0, 0x54($v1)
    ctx->pc = 0x44e9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44e9dc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44e9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44e9e0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44e9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44e9e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x44E9E4u;
    {
        const bool branch_taken_0x44e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9E4u;
        // 0x44e9e8: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9e4) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44E9ECu;
label_44e9ec:
    // 0x44e9ec: 0x6862007b  ldl         $v0, 0x7B($v1)
    ctx->pc = 0x44e9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44e9f0: 0x6c620074  ldr         $v0, 0x74($v1)
    ctx->pc = 0x44e9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44e9f4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44e9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44e9f8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44e9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44e9fc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x44E9FCu;
    {
        const bool branch_taken_0x44e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E9FCu;
        // 0x44ea00: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e9fc) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA04u;
label_44ea04:
    // 0x44ea04: 0x68620073  ldl         $v0, 0x73($v1)
    ctx->pc = 0x44ea04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea08: 0x6c62006c  ldr         $v0, 0x6C($v1)
    ctx->pc = 0x44ea08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea0c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea10: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x44EA14u;
    {
        const bool branch_taken_0x44ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA14u;
        // 0x44ea18: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea14) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA1Cu;
label_44ea1c:
    // 0x44ea1c: 0x68620063  ldl         $v0, 0x63($v1)
    ctx->pc = 0x44ea1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea20: 0x6c62005c  ldr         $v0, 0x5C($v1)
    ctx->pc = 0x44ea20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea24: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea28: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x44EA2Cu;
    {
        const bool branch_taken_0x44ea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA2Cu;
        // 0x44ea30: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea2c) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA34u;
label_44ea34:
    // 0x44ea34: 0x6862006b  ldl         $v0, 0x6B($v1)
    ctx->pc = 0x44ea34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea38: 0x6c620064  ldr         $v0, 0x64($v1)
    ctx->pc = 0x44ea38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea3c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea40: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x44EA44u;
    {
        const bool branch_taken_0x44ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA44u;
        // 0x44ea48: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea44) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA4Cu;
label_44ea4c:
    // 0x44ea4c: 0x6862008b  ldl         $v0, 0x8B($v1)
    ctx->pc = 0x44ea4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea50: 0x6c620084  ldr         $v0, 0x84($v1)
    ctx->pc = 0x44ea50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea54: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea58: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x44EA5Cu;
    {
        const bool branch_taken_0x44ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA5Cu;
        // 0x44ea60: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea5c) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA64u;
label_44ea64:
    // 0x44ea64: 0x68620083  ldl         $v0, 0x83($v1)
    ctx->pc = 0x44ea64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea68: 0x6c62007c  ldr         $v0, 0x7C($v1)
    ctx->pc = 0x44ea68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea6c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea70: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x44EA74u;
    {
        const bool branch_taken_0x44ea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA74u;
        // 0x44ea78: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea74) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA7Cu;
label_44ea7c:
    // 0x44ea7c: 0x68620093  ldl         $v0, 0x93($v1)
    ctx->pc = 0x44ea7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea80: 0x6c62008c  ldr         $v0, 0x8C($v1)
    ctx->pc = 0x44ea80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea84: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea88: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44ea88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44ea8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x44EA8Cu;
    {
        const bool branch_taken_0x44ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EA8Cu;
        // 0x44ea90: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ea8c) {
            ctx->pc = 0x44EAA8u;
            goto label_44eaa8;
        }
    }
    ctx->pc = 0x44EA94u;
label_44ea94:
    // 0x44ea94: 0x6862009b  ldl         $v0, 0x9B($v1)
    ctx->pc = 0x44ea94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44ea98: 0x6c620094  ldr         $v0, 0x94($v1)
    ctx->pc = 0x44ea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x44ea9c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x44ea9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44eaa0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x44eaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44eaa4: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x44eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_44eaa8:
    // 0x44eaa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x44EAA8u;
    {
        const bool branch_taken_0x44eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44eaa8) {
            ctx->pc = 0x44EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44EAA8u;
            // 0x44eaac: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44EAB0u;
            goto label_44eab0;
        }
    }
    ctx->pc = 0x44EAB0u;
label_44eab0:
    // 0x44eab0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44eab4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44EAB4u;
    {
        const bool branch_taken_0x44eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EAB4u;
        // 0x44eab8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eab4) {
            ctx->pc = 0x44EAE0u;
            goto label_44eae0;
        }
    }
    ctx->pc = 0x44EABCu;
    // 0x44eabc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x44eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x44eac0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44EAC0u;
    {
        const bool branch_taken_0x44eac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EAC0u;
        // 0x44eac4: 0x8f838418  lw          $v1, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eac0) {
            ctx->pc = 0x44EAE0u;
            goto label_44eae0;
        }
    }
    ctx->pc = 0x44EAC8u;
    // 0x44eac8: 0xe62825  or          $a1, $a3, $a2
    ctx->pc = 0x44eac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x44eacc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x44eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44ead0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ead4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x44ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x44ead8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x44ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x44eadc: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x44eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_44eae0:
    // 0x44eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x44EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EAE0u;
        // 0x44eae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EAE8u;
}
